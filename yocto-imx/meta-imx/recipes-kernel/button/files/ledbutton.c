#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
#include <linux/kthread.h>
#include <linux/delay.h>

#define GPIO_BUTTON 128   // change as per your board
#define GPIO_LED    53   // C13 LED pin

static int major;
static char value;
static int led_state = 0;
static struct task_struct *thread;

/* ================= THREAD ================= */
int button_thread_fn(void *data)
{
    int button_val, prev_val = 1;

    while (!kthread_should_stop()) {

        button_val = gpio_get_value(GPIO_BUTTON);

        /* Falling edge detect */
        if (button_val == 0 && prev_val == 1) {
            led_state = !led_state;
            gpio_set_value(GPIO_LED, led_state);

            pr_info("Button Pressed → LED = %d\n", led_state);
            msleep(200); // debounce
        }

        prev_val = button_val;
        msleep(50);
    }

    return 0;
}

/* ================= READ ================= */
static ssize_t dev_read(struct file *file, char __user *buf, size_t len, loff_t *off)
{
    if (*off > 0)
        return 0;

    value = led_state ? '1' : '0';

    if (copy_to_user(buf, &value, 1))
        return -EFAULT;

    *off = 1;
    return 1;
}

/* ================= WRITE ================= */
static ssize_t dev_write(struct file *file, const char __user *buf, size_t len, loff_t *off)
{
    char kbuf;

    if (copy_from_user(&kbuf, buf, 1))
        return -EFAULT;

    if (kbuf == '1') {
        led_state = 1;
    } else if (kbuf == '0') {
        led_state = 0;
    }

    gpio_set_value(GPIO_LED, led_state);

    return len;
}

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .read  = dev_read,
    .write = dev_write,
};

/* ================= INIT ================= */
static int __init my_init(void)
{
    int ret;

    pr_info("LED Button Driver Init\n");

    /* BUTTON */
    ret = gpio_request(GPIO_BUTTON, "button_gpio");
    if (ret) {
        pr_err("Button GPIO request failed\n");
        return ret;
    }
    gpio_direction_input(GPIO_BUTTON);

    /* LED */
    ret = gpio_request(GPIO_LED, "led_gpio");
    if (ret) {
        pr_err("LED GPIO request failed\n");
        gpio_free(GPIO_BUTTON);
        return ret;
    }
    gpio_direction_output(GPIO_LED, 0);

    /* CHAR DEVICE */
    major = register_chrdev(0, "ledbutton", &fops);
    if (major < 0) {
        pr_err("Char device failed\n");
        gpio_free(GPIO_BUTTON);
        gpio_free(GPIO_LED);
        return major;
    }

    pr_info("Major number = %d\n", major);
    pr_info("Create node:\n");
    pr_info("mknod /dev/ledbutton c %d 0\n", major);

    /* THREAD */
    thread = kthread_run(button_thread_fn, NULL, "button_thread");

    return 0;
}

/* ================= EXIT ================= */
static void __exit my_exit(void)
{
    kthread_stop(thread);

    gpio_set_value(GPIO_LED, 0);
    gpio_free(GPIO_BUTTON);
    gpio_free(GPIO_LED);

    unregister_chrdev(major, "ledbutton");

    pr_info("Driver Removed\n");
}

module_init(my_init);
module_exit(my_exit);

MODULE_LICENSE("GPL");

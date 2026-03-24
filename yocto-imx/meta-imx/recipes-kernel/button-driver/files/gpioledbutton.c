#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>
#include <linux/uaccess.h>
#include <linux/fs.h>

#define GPIO_BUTTON 20   // Change as per your board
#define GPIO_LED    21   // Change as per your board

static int major;
static char value;

/* ---------------- READ (Button) ---------------- */
static ssize_t button_read(struct file *file,
                           char __user *buf,
                           size_t len, loff_t *off)
{
    int state;

    if (*off > 0)
        return 0;

    state = gpio_get_value(GPIO_BUTTON);
    value = state ? '1' : '0';

    if (copy_to_user(buf, &value, 1))
        return -EFAULT;

    *off = 1;
    return 1;
}

/* ---------------- WRITE (LED) ---------------- */
static ssize_t led_write(struct file *file,
                         const char __user *buf,
                         size_t len, loff_t *off)
{
    char kbuf;

    if (len < 1)
        return -EINVAL;

    if (copy_from_user(&kbuf, buf, 1))
        return -EFAULT;

    if (kbuf == '1') {
        gpio_set_value(GPIO_LED, 1);
        pr_info("LED ON\n");
    }
    else if (kbuf == '0') {
        gpio_set_value(GPIO_LED, 0);
        pr_info("LED OFF\n");
    }
    else {
        pr_err("Invalid input\n");
        return -EINVAL;
    }

    return 1;
}

/* ---------------- FILE OPS ---------------- */
static struct file_operations fops = {
    .owner = THIS_MODULE,
    .read  = button_read,
    .write = led_write,
};

/* ---------------- INIT ---------------- */
static int __init gpio_driver_init(void)
{
    int ret;

    pr_info("GPIO LED + Button Driver Init\n");

    /* BUTTON */
    ret = gpio_request(GPIO_BUTTON, "button_gpio");
    if (ret) {
        pr_err("Button GPIO request failed\n");
        return ret;
    }

    ret = gpio_direction_input(GPIO_BUTTON);
    if (ret) {
        pr_err("Button direction failed\n");
        gpio_free(GPIO_BUTTON);
        return ret;
    }

    /* LED */
    ret = gpio_request(GPIO_LED, "led_gpio");
    if (ret) {
        pr_err("LED GPIO request failed\n");
        gpio_free(GPIO_BUTTON);
        return ret;
    }

    ret = gpio_direction_output(GPIO_LED, 0);
    if (ret) {
        pr_err("LED direction failed\n");
        gpio_free(GPIO_BUTTON);
        gpio_free(GPIO_LED);
        return ret;
    }

    /* REGISTER DEVICE */
    major = register_chrdev(0, "gpioledbutton", &fops);
    if (major < 0) {
        pr_err("Failed to register char device\n");
        gpio_free(GPIO_BUTTON);
        gpio_free(GPIO_LED);
        return major;
    }

    pr_info("Driver registered with major number %d\n", major);
    pr_info("Create device:\n");
    pr_info("mknod /dev/gpioledbutton c %d 0\n", major);

    return 0;
}

/* ---------------- EXIT ---------------- */
static void __exit gpio_driver_exit(void)
{
    gpio_set_value(GPIO_LED, 0);
    gpio_free(GPIO_BUTTON);
    gpio_free(GPIO_LED);
    unregister_chrdev(major, "gpioledbutton");

    pr_info("Driver removed\n");
}

module_init(gpio_driver_init);
module_exit(gpio_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dhanesh");
MODULE_DESCRIPTION("GPIO LED + Button Driver");

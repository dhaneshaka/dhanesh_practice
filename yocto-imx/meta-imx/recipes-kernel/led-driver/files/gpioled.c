#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>
#include <linux/fs.h>
#include <linux/uaccess.h>

#define GPIO_LED 21   // Change according to your board

static int major;
static char value;

static ssize_t led_write(struct file *file, const char __user *buf, size_t len, loff_t *off)
{
    copy_from_user(&value, buf, 1);

    if (value == '1')
        gpio_set_value(GPIO_LED, 1); // LED ON
    else if (value == '0')
        gpio_set_value(GPIO_LED, 0); // LED OFF

    return len;
}

static struct file_operations fops = {
    .owner = THIS_MODULE,
    .write = led_write,
};

static int __init led_init(void)
{
    printk("LED Driver Init\n");

    // Request GPIO
    if (gpio_request(GPIO_LED, "led_gpio")) {
        printk("GPIO request failed\n");
        return -1;
    }

    // Set as output
    gpio_direction_output(GPIO_LED, 0);

    // Register character device
    major = register_chrdev(0, "led_driver", &fops);

    printk("Driver registered with major number %d\n", major);

    return 0;
}

static void __exit led_exit(void)
{
    gpio_set_value(GPIO_LED, 0);
    gpio_free(GPIO_LED);
    unregister_chrdev(major, "led_driver");

    printk("LED Driver Removed\n");
}

module_init(led_init);
module_exit(led_exit);

MODULE_LICENSE("GPL");


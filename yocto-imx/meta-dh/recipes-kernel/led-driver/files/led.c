#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/gpio.h>
#include <linux/delay.h>

#define LED_GPIO 3

static int __init led_init(void)
{
    printk("LED Driver Loaded\n");

    gpio_request(LED_GPIO, "led_gpio");
    gpio_direction_output(LED_GPIO, 0);

    while(1)
    {
        gpio_set_value(LED_GPIO,1);
        msleep(500);

        gpio_set_value(LED_GPIO,0);
        msleep(500);
    }

    return 0;
}

static void __exit led_exit(void)
{
    gpio_set_value(LED_GPIO,0);
    gpio_free(LED_GPIO);
    printk("LED Driver Removed\n");
}

module_init(led_init);
module_exit(led_exit);

MODULE_LICENSE("GPL");

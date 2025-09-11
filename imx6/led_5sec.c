
#include <stdio.h>
#include <unistd.h>

#define LED_PATH "/sys/class/leds/user/brightness"   
#define ON_TIME_SECONDS  10
#define OFF_TIME_SECONDS 5


static int set_led(int value)
{
    FILE *fp = fopen(LED_PATH, "w");
    if (!fp) {
        perror("Cannot open LED brightness file");
        return -1;
    }

    fputc(value ? '1' : '0', fp);
    fclose(fp);
    return 0;
}

int main(void)
{
    while (1) {
        if (set_led(1) != 0) return 1;
        printf("LED ON  (for %d s)\n", ON_TIME_SECONDS);
        sleep(ON_TIME_SECONDS);

        if (set_led(0) != 0) return 1;
        printf("LED OFF (for %d s)\n", OFF_TIME_SECONDS);
        sleep(OFF_TIME_SECONDS);
    }
    return 0;
}


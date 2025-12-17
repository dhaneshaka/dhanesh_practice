#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

// Path to the LED in sysfs
#define LED_PATH "/sys/class/leds/led3/brightness"

int main(void)
{
    int fd;
    int i;

    // Open the brightness file for writing
    fd = open(LED_PATH, O_WRONLY);
    if (fd < 0) {
        perror("Failed to open LED brightness file");
        return 1;
    }

    printf("Blinking LED (GPIO1_IO20)...\n");

    for (i = 0; i<100; i++) {       // blink 10 times
        // Turn ON LED
        if (write(fd, "1", 1) < 0) {
            perror("Failed to write ON");
            close(fd);
            return 1;
        }
        usleep(500000);  // delay 500 ms

        // Turn OFF LED
        if (write(fd, "0", 1) < 0) {
            perror("Failed to write OFF");
            close(fd);
            return 1;
        }
        usleep(500000);  // delay 500 ms
    }
}

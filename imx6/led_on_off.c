#include <stdio.h>
#include <unistd.h>

int main()
{
    FILE *fp;
    int state = 0;

    while (1)
    {
        fp = fopen("/sys/class/leds/user/brightness", "w");
        if (fp == NULL)
        {
            perror("Cannot open LED file");
            return 1;
        }

        if (state)
        {
            fputs("1", fp);
            printf("LED ON\n");
        }
        else
        {
            fputs("0", fp);
            printf("LED OFF\n");
        }

        fclose(fp);
        state = !state;
        sleep(1);
    }

    return 0;
}


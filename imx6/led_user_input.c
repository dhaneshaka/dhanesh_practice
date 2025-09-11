#include <stdio.h>
#include <unistd.h>

int main() {
    const char *led_path = "/sys/class/leds/user/brightness";
    FILE *fp;
    int choice;

    while (1) {
        printf("\n1. Turn LED ON\n2. Turn LED OFF\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        fp = fopen(led_path, "w");

        if (fp == NULL) {
            perror("LED control file error");
            return 1;
        }

        switch (choice) {
            case 1:
                fprintf(fp, "1");
                printf("LED ON\n");
                break;
            case 2:
                fprintf(fp, "0");
                printf("LED OFF\n");
                break;
            case 3:
                fclose(fp);
                return 0;
            default:
                printf("Invalid choice\n");
        }

        fclose(fp);
    }

    return 0;
}


#include <stdio.h>

int main() {
    int choice;
    float temp, converted_temp;
    printf("Temperature Conversion Menu:\n");
    printf("1. Convert Fahrenheit to Celsius\n");
    printf("2. Convert Celsius to Fahrenheit\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &temp);
        converted_temp = (temp - 32) * 5 / 9;
        printf("Temperature in Celsius: %.2f°C\n", converted_temp);
    } else if (choice == 2) {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &temp);
        converted_temp = (temp * 9 / 5) + 32;
        printf("Temperature in Fahrenheit: %.2f°F\n", converted_temp);
    } else {
        printf("Invalid choice! Please enter 1 or 2.\n");
    }

    return 0;
}


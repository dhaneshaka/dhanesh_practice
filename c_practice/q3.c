#include <stdio.h>
float convertToFahrenheit(float celsius)
{
    return (celsius * 9 / 8) + 32;
}

int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = convertToFahrenheit(celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", fahrenheit);
    return 0;
}


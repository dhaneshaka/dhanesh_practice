#include <stdio.h>
typedef struct 
{
    char brand[20];
    char model[20];
    int year;
    float engine_capacity;
} Car;
void displayCar(Car c) {
    printf("\nCar Details:\n");
    printf("Brand: %s\n", c.brand);
    printf("Model: %s\n", c.model);
    printf("Year: %d\n", c.year);
    printf("Engine Capacity: %.1f L\n", c.engine_capacity);
}

int main() {
    Car cars[3]; 
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Car %d:\n", i + 1);
        printf("Brand: ");
        scanf("%s", cars[i].brand);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Engine Capacity (in Liters): ");
        scanf("%f", &cars[i].engine_capacity);
    }

    for (int i = 0; i < 3; i++) {
        displayCar(cars[i]);
    }

    return 0;
}


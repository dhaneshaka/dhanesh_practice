#include <stdio.h>
#include <math.h> // Required for the sqrt function

void printHollowCircle(int radius) {
    // dist represents the distance from the center
    double dist;
    // for horizontal movement
    for (int i = 0; i <= 2 * radius; i++) {
        // for vertical movement
        for (int j = 0; j <= 2 * radius; j++) {
            dist = sqrt(pow(i - radius, 2) + pow(j - radius, 2));

            // dist should be in the range (radius - 0.5) and (radius + 0.5)
            // to print stars(*) only on the circumference
            if (dist > radius - 0.5 && dist < radius + 0.5) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int radius;
    printf("Enter the radius of the circle: ");
    // Use scanf to read user input
    if (scanf("%d", &radius) != 1 || radius <= 0) {
        printf("Invalid input. Please enter a positive integer radius.\n");
        return 1;
    }

    printf("Hollow circle with radius %d:\n", radius);
    printHollowCircle(radius);

    return 0;
}


#include <stdio.h>

int main() {
    int n;
    float num, sum = 0, average;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf(" Number of elements should be greater than zero.\n");
         
    }
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &num);
        sum += num;
    }
    average = sum / n;
    printf("The average of the given numbers is: %.2f\n", average);

    return 0;
}


#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int sum = 0;

    ptr = numbers; 

    for(int i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}


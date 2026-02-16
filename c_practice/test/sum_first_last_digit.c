#include <stdio.h>

int main() 
{
    int n, first, last;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10; 

    while (n >= 10) 
    {
        n = n / 10;
    }

    first = n;

    printf("Sum of first and last digit = %d\n", first + last);

    return 0;
}


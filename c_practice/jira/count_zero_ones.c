#include <stdio.h>

int main() 
{
    int n, ones = 0, zeros = 0, bits = 32;

    printf("enter the input values:");
    scanf("%d", &n);

    for (int i = 0; i < bits; i++)
    {
        if (n & 1)
            ones++;
        else
            zeros++;
        n >>= 1;
    }

    printf("Ones: %d, Zeros: %d\n", ones, zeros);
    return 0;
}


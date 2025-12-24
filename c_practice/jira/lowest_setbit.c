#include <stdio.h>

int main()
{
    int n, pos = 0;
    printf("enter the input values:");
    scanf("%d", &n);

    while ((n & 1) == 0) 
    {
        n >>= 1;
        pos++;
    }

    printf("Lowest set bit position: %d\n", pos);
    return 0;
}


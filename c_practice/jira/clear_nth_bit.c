#include <stdio.h>

int main()
{
    int n, pos;
    printf("enter the input values:");
    scanf("%d %d", &n, &pos);

    n = n & ~(1 << pos);
    printf("Result: %d\n", n);

    return 0;

}


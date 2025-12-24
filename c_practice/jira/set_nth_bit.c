#include <stdio.h>

int main()
{
    int n, pos;
    printf("enter the numbers:");
    scanf("%d %d", &n, &pos);

    n = n | (1 << pos);
    printf("Result: %d\n", n);

    return 0;
}


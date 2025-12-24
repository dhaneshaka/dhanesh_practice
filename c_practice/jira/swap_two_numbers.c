#include <stdio.h>

int main()
{
    int a, b;

    printf("enter the input values:");
    scanf("%d %d", &a, &b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("a=%d b=%d\n", a, b);
    return 0;
}


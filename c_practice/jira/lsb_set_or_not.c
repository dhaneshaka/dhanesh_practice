#include <stdio.h>

int main()
{
    int n;
    printf("enter the input value:");
    scanf("%d", &n);

    if (n&1)
        printf("LSB is set\n");
    else
        printf("LSB is not set\n");

    return 0;
}


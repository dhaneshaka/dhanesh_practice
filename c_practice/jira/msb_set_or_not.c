#include <stdio.h>

int main() 
{
    int n;
    printf("enter the input value:");
    scanf("%d", &n);

    if (n & (1 << 31))
        printf("MSB is SET\n");
    else
        printf("MSB is NOT SET\n");

    return 0;
}


#include <stdio.h>

int main()
{
    int n, pos = -1;
    printf("enter the input values:");
    scanf("%d", &n);

    while (n) {
        pos++;
        n >>= 1;
    }

    printf("Highest set bit position: %d\n", pos);
    return 0;
}


#include <stdio.h>

int main()
{
    int a[5] = {10, 20, 30, 40,50};
    int i, temp;
    int n=5;

    for(i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-1-i];
        a[n-1-i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < n; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }

    return 0;
}


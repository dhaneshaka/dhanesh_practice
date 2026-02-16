#include <stdio.h>

int main()
{
    int n = 5;
    int i, j, space;

    // Upper half (including middle)
    for (i = 1; i <= n; i++)
    {
        // Leading spaces
        for (space = 1; space < i; space++)
            printf("  ");

        // Numbers
        for (j = 1; j <= (2*(n - i) + 1); j++)
            printf("%d ", i);

        printf("\n");
    }

    // Lower half
    for (i = n - 1; i >= 1; i--)
    {
        // Leading spaces
        for (space = 1; space < i; space++)
            printf("  ");

        // Numbers
        for (j = 1; j <= (2*(n - i) + 1); j++)
            printf("%d ", i);

        printf("\n");
    }

    return 0;
}


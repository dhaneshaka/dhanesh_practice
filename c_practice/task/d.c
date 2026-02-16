#include <stdio.h>

int main()
{
    int n = 5;

    for(int i = 1; i <= n; i++)
    {
        // Left side (5 to i)
        for(int j = n; j >= i; j--)
            printf("%d ", j);

        // Middle spaces
        for(int s = 1; s <= 2*i - 2; s++)
            printf("  ");

        // Right side
        for(int j = i; j <= n; j++)
        {
            if(i == 1 && j == 1)   // avoid duplicate middle 1
                continue;
            printf("%d ", j);
        }
        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--)
    {
        // Left side
        for(int j = n; j >= i; j--)
            printf("%d ", j);

        // Middle spaces
        for(int s = 1; s <= 2*i - 2; s++)
            printf("  ");

        // Right side
        for(int j = i; j <= n; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}


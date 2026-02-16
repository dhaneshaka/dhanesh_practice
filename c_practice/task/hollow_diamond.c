#include <stdio.h>

int main()
{
    int i, j, space;
    int n = 5;

    // Upper half (including middle row)
    for (i = n; i >= 1; i--)

    {

        // Left numbers
        for (j = n; j >= i; j--)
            printf("%d ", j);

        // Middle spaces
        for (space = 1; space < (2*i - 2); space++)
            printf("  ");

        // Right numbers
	
        for (j = i; j <= n; j++)
	{
		if(j==1)
		{
			continue;
		}
            printf("%d ", j);
	}
        printf("\n");
    }

    // Lower half
    for (i = 2; i <= n; i++)
    {
        // Left numbers
        for (j = n; j >= i; j--)
            printf("%d ", j);

        // Middle spaces
        for (space = 1; space < (2*i - 2); space++)
            printf("  ");

        // Right numbers
        for (j = i; j <= n; j++)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}


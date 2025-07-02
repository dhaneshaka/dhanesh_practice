#include <stdio.h>

int main() 
{
    int i, j;
    for (j = 1; j <= 20; j++)
    {
        printf("Multiplication Table of %d:\t",j);
        for (i = 1; i <= 10; i++) 
	{
            printf("%d x %d = %d\n", j,i, i * i);
        }
        printf("\n");
    }

    return 0;
}


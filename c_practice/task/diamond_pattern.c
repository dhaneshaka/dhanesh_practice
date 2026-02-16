#include <stdio.h>

int main()
{
    int n = 5;
    int i, j,k;

    for (i = n; i >= 1; i--)
    {
        for (k=0;k<i;k++)
            printf("  ");

        for (j=n;j>=i;j--)
            printf("%d ",j);

        for (j=i+1;j<=n;j++)
            printf("%d ",j);

        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
	for (k=0;k<i;k++)
            printf("  ");

        for (j=n;j>=i;j--)
            printf("%d ",j);

        for (j=i+1;j<=n;j++)
            printf("%d ",j);

        printf("\n");
    }
	
}


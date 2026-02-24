#include<stdio.h>

int main()
{
	int i,j,n;

	printf("emter the number of rows\n");
	scanf("%d",&n);

	for(i = 1; i <= n; i++ )
	{
		for(j = 1; j <= n; j++)
		{
			printf(" ");
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

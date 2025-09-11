#include<stdio.h>

int main()
{

	int i,j,n;

	printf("enter the number of rows\n");
	scanf("%d",&n);


//	printf("enter the number of column\n");
//	scanf("%d",&column);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}


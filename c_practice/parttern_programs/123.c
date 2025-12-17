#include<stdio.h>
int main()
{
	int i,j,row,column;

	printf("enter the number of rows\n");
	scanf("%d",&row);


	printf("enter the number of column\n");
	scanf("%d",&column);


	for(i=1; i<=row;i++)
	{
		for(j=1; j<=column;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}


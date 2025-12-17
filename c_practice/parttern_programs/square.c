#include<stdio.h>
int main()

{
	int i,j,rows,column;

	printf("enter the number of rows\n");
	scanf("%d",&rows);


	printf("enter the number of column \n");
	scanf("%d",&column);

	for(i=1; i<=rows;i++)
	{
		for(j=1; j<=column;j++)
		{
			printf("1");
		}
		printf("\n");
	}
	return 0;
}


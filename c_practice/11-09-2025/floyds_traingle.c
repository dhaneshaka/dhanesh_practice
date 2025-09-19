#include<stdio.h>

int main()
{
	int rows,num=1,k;
	printf("enter the number of rows\n");
	scanf("%d",&rows);


	for(int i=1;i<=rows;i++)
	{
		for(int k=1;k<=rows-i;k++)
		{
			printf("  ");
		}
		for(int j=1;j<=i;j++)
		{
			printf("%d  ",num++);
		
		}
		printf("\n");
		}
	
	return 0;
}


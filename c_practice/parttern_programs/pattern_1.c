#include<stdio.h>
int main()
{
	int i,j,n,k;

	printf("enter the n number\n");
	scanf("%d",&n);


	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		{
			printf("  ");
		}
		for(j=1;j<=i;j++);
		{
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}


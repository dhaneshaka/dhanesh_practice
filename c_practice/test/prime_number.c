#include<stdio.h>
int main()
{
	int i,j,n,flag;
	printf("enter input value: ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		flag=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
			   flag=0;
			   break;
			}
		}

		if(flag)
		{
		  printf("%d",i);
		}
	}
	return 0;
}

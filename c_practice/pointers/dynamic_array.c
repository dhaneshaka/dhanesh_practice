#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i,sum=0;
	printf("enter the number of element \n");
		scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("enter the number of values\n");
	for (i = 0; i < n; i++)
	{
		scanf("%d",(p + i));
		
		sum=sum + *(p + i);
	}
	printf("%d  ",sum);
	return 0;
}



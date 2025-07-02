#include<stdio.h>
int main()
{
	int m,n;
	
	printf("enter the value of m,n:\n");
		scanf("%d%d",&m,&n);
	n^=(1<<m);
	printf("the toggle bit value is:%d\n",n);
		return 0;
}
	
	

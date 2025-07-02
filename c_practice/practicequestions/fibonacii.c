#include<stdio.h>
int main()
{
	int n, a=0,b=1,c=0,i;
	printf("enter the number: ");
	scanf("%d",&n);
	for (i=0;i<=n;++i)
	{
		printf("%d\t",c);
		c=b+a;
		a=b;
		b=c;
	}
	return 0;
}
		


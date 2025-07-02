#include<stdio.h>
int main()
{
	int n,a,b;
	printf("enter the value :\n");
	scanf("%d%d%d",&n,&a,&b);
	n|=(2<<a)||(2<<b);
	printf("%d\n",n);
	return 0;
}

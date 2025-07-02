#include<stdio.h>
int main()
{
	int n,a,b,c,d;
	printf("enter the value :\n");
	scanf("%x", &n);
	a=n&(0xf000);
	b=n&(0x0f00);
	c=n&(0x00f0);
	d=n&(0x000f);
	n=(a>>8)|(b>>8)|(c<<8)|(d<<8);
	printf("0x%x\n",n);
	return 0 ;
}

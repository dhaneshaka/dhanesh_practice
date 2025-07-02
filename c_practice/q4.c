#include<stdio.h>
int main ()
{
	int  a,b,temp;
	a=54321;
	b=12345;
	printf("befor swapping : a=%d,b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("after swapping : a=%d,b=%d\n",a,b);
	return 0;
}

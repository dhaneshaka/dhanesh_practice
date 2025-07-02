#include<stdio.h>
void function()
{
	auto int a=10;
	printf("out side function :%d\n",a);
	
}
int main()
{
	 int b=20;
	printf("in side the function:%d\n",b);
function();

	return 0;
}

		

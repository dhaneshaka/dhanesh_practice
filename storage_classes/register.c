#include<stdio.h>
void function()
{
	register int counter=10;
	counter ++;
	printf("counter:%d\n",counter);
}
int main()
{
	function();
	return 0;
}


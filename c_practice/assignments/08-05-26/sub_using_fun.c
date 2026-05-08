#include<stdio.h>
int sub(int a,int b,int c)
{
	return a-b-c;
}
void dhanesh()
{
	int a=300;
	int b=200;
	int c=100;

	printf("subtraction of two numbrers=%d\n",sub(a,b,c));
}
int main()
{
	dhanesh();
	return 0;
}


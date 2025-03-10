#include<stdio.h>
int d=10;
void fun()
{
	static int f=30;
	f=f+20;
	printf("%d \n",f);
}
int main(){
	int a=10,b=10,c=0;
	c=a+b+d;
	printf("%d \n",c);
	fun();
	fun();
	fun();
	fun();
        fun();
        fun();
	fun();
        fun();
        fun();
}


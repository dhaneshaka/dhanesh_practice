#include<stdio.h>
int swap(int*a,int*b)
{
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x,y;
	printf("enter the values of x and y\n");
	scanf("%d%d",&x,&y);
	swap(&x,&y);
	printf("the values of x and y after swapping %d %d \n",x,y);
	return 0;
}	

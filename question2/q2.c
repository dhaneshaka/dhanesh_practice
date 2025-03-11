#include<stdio.h>
int main()
{
	int num,digit, sum=0,product=1;
	printf("enter the number");
	scanf("%d",&num);
	if(num<0)
	{
		num= -num;
	}
	while(num>0)
	{
		digit = num%10;
		sum+=digit;
		product*=digit;
		num/=10;
	}
	printf("sum of digit :%d\n",sum);
	printf("product of digit :%d\n",product);
	return 0;
}

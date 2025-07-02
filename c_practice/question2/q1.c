# include<stdio.h>
int main ()
{
	long long int num, count=0;
	printf("enter the number: ");
	scanf("%lld",&num);
	if(num==0)
	{
		printf("count=1");
	}
	else
	{
		while(num!=0)
		{
			num = num /10;
			count++;
		}
	}
	printf("the number of digit:%lld\n",count);
	return 0;
}

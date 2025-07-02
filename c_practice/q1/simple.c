#include<stdio.h>
int main()
{
	float principal, rate, time, simple_interest;
	printf("enter the principal amount:");
	scanf("%f",&principal);
	printf("enter the annual intrest rate (in percentage): ");
	scanf("%f",&rate);
	printf("enter the time (in years): ");
	scanf("%f",&time);
	simple_interest=(principal * rate * time )/100;
	printf("simple interest: % 2f\n",simple_interest);
	return 0;
}


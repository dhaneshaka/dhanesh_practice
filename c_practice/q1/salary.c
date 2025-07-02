#include<stdio.h>
int main ()
{
	float basic_salary,hra,da,gross_salary;
	printf("enter the basic salary: ");
	scanf("%f",&basic_salary);
	hra=0.2*basic_salary;
	da=0.50*basic_salary;
	gross_salary = basic_salary + hra +da;
	printf("HRA:%2f\n",hra);
	printf("DA:%2f\n",da);
	printf("gross salary:%2f\n",gross_salary);
	return 0;
}

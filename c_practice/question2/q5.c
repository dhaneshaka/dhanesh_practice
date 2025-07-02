#include<stdio.h>
int main()
{
	int N,year;
	printf("enter the value of N: ");
	scanf("%d",&N);
	printf("leap year 1 to %d are :\n",N);
	for(year = 1; year <=N; year++)
	{
		if((year%4==0) && (year%100 !=0)|(year%400==0))
		{
			printf("%d\t",year);
		}
	}
	printf("\n");
	return 0;
}

#include<stdio.h>

int main()
{
	int a[5],i;
	int *p=a;

	printf("enter input elements\n");
	for(i=0;i<5;i++)
		scanf("%d",p+i);
	printf("array elements is=");
	for(i=0;i<5;i++)
		printf("%d",*(p+i));
	return 0;
}

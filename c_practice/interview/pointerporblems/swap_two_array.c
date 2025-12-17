#include<stdio.h>

int main()
{
	int a[5]={1,2,3,4,5};
	int b[5]={6,7,8,9,10};

	int i,temp;

	int *p=a;
	int *q=b;

	for(i=0;i<5;i++)
	{
		temp=*(p+i);
		*(p+i)=*(q+i);
		*(q+i)=temp;
	}
	printf("array of a\n:");
	for(i=0;i<5;i++)
		printf("%d ",a[i]);
	printf("\narray b\n:");
	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	return 0;
}

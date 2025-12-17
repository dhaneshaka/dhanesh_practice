#include<stdio.h>

int main()
{
	int a[6]={1,2,3,4,5,6};
	int *p=a;

	int i,temp;

	for(i=0;i<3;i++)
	{
		temp=*(p+i);
		*(p+i)=*(p+(5-i));
		*(p+(5-i))=temp;

	}
	printf("reverse array\n");
	for(i=0;i<6;i++)
		printf("%d ",a[i]);
	return 0;
}

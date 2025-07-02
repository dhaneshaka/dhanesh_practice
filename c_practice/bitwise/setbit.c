#include<stdio.h>
int main()
{

	int n,m;
	printf("enter the value of m and n:\n");
	scanf("%d%d",&m,&n);
	n=n|(1<<3);
	printf("bit after setting: %d\n",n);
	return 0;
}

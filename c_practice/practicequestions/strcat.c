#include<stdio.h>
#include<string.h>

int main()
{
	char s1[100]="hello";
	char s2[100]="world";

	strcat(s1,s2);

	printf("result is:%s\n",s1);
	return 0;
}
		

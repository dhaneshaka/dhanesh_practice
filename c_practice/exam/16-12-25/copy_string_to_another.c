#include<stdio.h>
int main()
{
	char src[50]="hi hello";
	char dest[50];


	char *s1=src;
	char *s2=dest;

	while(*s1 !='\0')
	{
		*s2=*s1;
		s1++;
		s2++;
	}
	*s2='\0';


	printf("source string:%s\n",src);
	printf("destination string :%s\n",dest);

	return 0;
}

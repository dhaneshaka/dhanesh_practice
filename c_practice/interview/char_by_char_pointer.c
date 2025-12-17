#include<stdio.h>

int main()
{
	char s[100]="dhanesh";
	char *p=s;
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
		{
			*p=*p-32;
		}
		p++;
	}
	printf("%s",s);
	return 0;
}

#include<stdio.h>

int main()
{
	char s[100]="DHANESH";
	char *p=s;

	while(*p!='\0')
	{
		if(*p>='A' && *p<='Z')
		{
			*p=*p+32;
		}
		p++;
	}
	printf("%s",s);
	return 0;
}

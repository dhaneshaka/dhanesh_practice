#include<stdio.h>
#include<ctype.h>

void toUpper(char *p)
{
	while(*p!='\0')
	{
		if(*p>='a' && *p<='z')
		{
			*p=*p-32;
		}
		p++;
	}
}
int main()
{
	char s[100]="dhanesh";
	toUpper(s);
	printf("%s",s);
	return 0;
}

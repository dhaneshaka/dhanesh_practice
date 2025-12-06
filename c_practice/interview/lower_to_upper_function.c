#include<stdio.h>
#include<ctype.h>
void toLower(char *p)
{
	while(*p!='\0')
	{
		if(*p>='A' && *p<='Z')
		{
			*p=*p+32;
		}
		p++;
	}
}
int main()
{
	char s[100]="DHANESH";
	toLower(s);
	printf("%s",s);
	return 0;
}	

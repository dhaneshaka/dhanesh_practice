#include<stdio.h>
#include<string.h>
int main()
{
	char s[100]="dhanesh";

	char *p=s;
	int len=strlen(s);

	p=p+len-1;

	for(int i=len-1;i>=0;i--)
	{
		printf("%c",*p);
		p--;
	}
	return 0;
}

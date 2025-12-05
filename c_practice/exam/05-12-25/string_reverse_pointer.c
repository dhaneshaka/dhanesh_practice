#include<stdio.h>
#include<string.h>

int main()
{
	char s[100]="dhanesh";
	char *p=s+strlen(s)-1;

	while(p>=s)
	{
		printf("%c",*p);
		p--;

	}
	return 0;
}


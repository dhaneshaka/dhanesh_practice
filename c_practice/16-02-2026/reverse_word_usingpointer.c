#include<stdio.h>
#include<string.h>

int reverse(char *p)
{
	char *start=p;
	char *end=p+strlen(p)-1;

	while(start<end)
	{
		char temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;

	}
}

int main()
{

	char s[]="olleh hsenahd";

	char *a=strtok(s," ");
	char *b=strtok(NULL," ");

	reverse(a);
	reverse(b);

	printf("%s %s\n",a,b);
	return 0;
}


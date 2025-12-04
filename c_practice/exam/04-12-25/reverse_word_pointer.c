#include<stdio.h>
#include<string.h>

int reverse(char *p)
{
	char *s=p;
	char *e=p+strlen(p)-1;

	while(s<e)
	{
		char t=*s;
		*s=*e;
		*e=t;

		s++;
		e--;
	}
}
int main()
{
	char s[100]="hii dhanesh";
	char *a=strtok(s," ");
	char *b=strtok(NULL," ");

	reverse(a);
	reverse(b);

	printf("%s %s\n",a,b);
	return 0;
}


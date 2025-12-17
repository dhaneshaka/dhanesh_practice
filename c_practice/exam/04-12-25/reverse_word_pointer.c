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
	char s[100]="embedded linux is greate learning";
	char *a=strtok(s," ");
	char *b=strtok(NULL," ");
	char *c=strtok(NULL," ");
	char *d=strtok(NULL," ");
	char *e=strtok(NULL," ");

	reverse(a);
	reverse(b);
	reverse(c);
        reverse(d);
	reverse(e);

	printf("%s %s %s %s %s\n",a,b,c,d,e);
	return 0;
}


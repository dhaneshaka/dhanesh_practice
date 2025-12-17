#include<stdio.h>

int main()
{
	char s[100]="DhAnEsH aKa";
	char *p=s;
	int uppercase=0;
	int lowercase=0;

	while(*p)
	{
		if(*p>='a' && *p<='z')
		{
			lowercase++;
		}
		else if(*p>='A' && *p<='Z')
		{
			uppercase++;
		}
		p++;
	}
	printf("lowercase=%d\n",lowercase);
	printf("uppercase=%d\n",uppercase);
	return 0;
}

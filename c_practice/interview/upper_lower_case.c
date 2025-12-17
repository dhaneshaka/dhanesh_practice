#include<stdio.h>
int main()
{
	char s[100]="DHaneSh Aka";
	int lower=0,upper=0;
	char *p=s;
	while(*p)
	{
		if(*p>='a' && *p<='z')
		{
			lower++;
		}
		else if(*p>='A' && *p<='Z')
		{
			upper++;
		}
		p++;
	}
	printf("lowercase=%d\n",lower);
	printf("uppercase=%d\n",upper);

	return 0;
}


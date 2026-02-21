#include<stdio.h>

int main()
{
	char s[100]="dhanesh ak";
        char *p=s;

	int vowels=0;

	while(*p)
	{
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o'|| *p=='u')
		{
			vowels++;
		}
		p++;
	}
	printf("vowels=%d\n",vowels);
	return 0;
}

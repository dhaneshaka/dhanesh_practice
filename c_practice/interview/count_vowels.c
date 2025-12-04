#include<stdio.h>
int main()
{
	char s[100]="Dhanesh ka";
	char *p=s;

	int vowels=0,consunants=0;

	while(*p)
	{
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||
		   
		   *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
		{
			vowels++;
		}
		else if((*p>='a' && *p<='z')||(*p>='P' && *p<='Z'))
		{
			consunants++;
		}
		p++;
	}
	printf("vowels=%d\n",vowels);
	printf("consunant=%d\n",consunants);

	return 0;
}

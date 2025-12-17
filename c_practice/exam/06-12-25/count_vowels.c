#include<stdio.h>

int main()
{
	char s[100]="dhaNESH aKa";
	char *p=s;

	int vowels=0,consonants=0;

	while(*p)
	{
		if(*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' ||
		   *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U')
		{
			vowels++;
		}
		else if((*p>='a' && *p<='z')||(*p>='A' && *p<='Z'))
		{
			consonants++;
		}
		p++;
	}
	printf("vowels=%d\n",vowels);
	printf("consonants=%d\n",consonants);
	return 0;
}

#include<stdio.h>
int main()
{
	char ch;
	printf("uppercase Alphabets : ");
	for (ch = 'A'; ch <= 'Z';ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
	printf("lowercase Alphabets : ");
	for (ch ='a'; ch <= 'z';ch++)
	{
		printf("%c\t",ch);

	}
	printf("\n");
	return 0;
}


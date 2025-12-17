#include<stdio.h>
#include<string.h>

int main()
{
	char s[100]="am i dhanesh";
	char first[100];
	char second[100];
	char third[100];

	strcpy(first,strtok(s," "));
	strcpy(second,strtok(NULL," "));
	strcpy(third,strtok(NULL," "));

	printf("%s %s %s\n",second,first,third);
	return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char s[100]="hello i am dhanesh";
	char first[10];
	char second[10];
	char third[10];
	char fourth[10];

	strcpy(first,strtok(s," "));
	strcpy(second,strtok(NULL," "));
	strcpy(third,strtok(NULL," "));
	strcpy(fourth,strtok(NULL," "));

	printf("%s %s %s %s\n",second,third,fourth,first);
	return 0;
}

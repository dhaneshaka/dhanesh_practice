#include<stdio.h>
#include<string.h>
int reverse(char *p)
{
	char *start=p;
	char *end=p+strlen(p)-1;

	while(start<end)
	{
		char temp=*start;
		*start=*end;
		*end=temp;

		start++;
		end--;
	}
}

int main()
{
	char s[100]="dhanesh good morning hii ";

	char first[50];
	char second[50];
	char third[50];
	char fourth[50];

	strcpy(first,strtok(s," "));
	strcpy(second,strtok(NULL," "));
	strcpy(third,strtok(NULL," "));
	strcpy(fourth,strtok(NULL," "));

	printf("%s %s %s %s\n",fourth,second,third,first);

	return 0;
}

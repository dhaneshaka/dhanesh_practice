#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="dhanesh";
	char s2[]="dhanesh";

	int result=strcmp(s1,s2);

	if(result==0)
	{
		printf("string is equal\n");
	}
	else if(result>0)
	{
		printf("first is grater\n");
	}
	else
	{
		printf("second is grater\n");
	}
	return 0;
}


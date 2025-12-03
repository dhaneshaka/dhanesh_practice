#include<stdio.h>
#include<string.h>

int main()
{
	char str[100]="hello dhanesh";
	char sub[100]="x";
	char *ptr=strstr(str,sub);

	if(ptr !=NULL)
	{
		printf("substring found at position %ld\n",ptr-str);
	}
	else
	{
		printf("substring is not found\n");
	}
	return 0;
}

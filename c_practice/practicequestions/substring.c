#include<stdio.h>
#include<string.h>

int main()
{
	char str[100]="hello dhanesh";
	char sub[20]="h";

	char *ptr=strstr(str,sub);

	while(ptr !=NULL)
	{
		printf("substring found at podition:%ld\n",ptr-str);
	
	
		ptr=strstr(ptr+1,sub);
	}
//	else
//	{
//		printf("substring not found\n");
//	}
	return 0;
}


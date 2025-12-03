#include<stdio.h>
#include<string.h>

int main()
{
	char src[]="dhanesh";
	char dest[20];

	strcpy(dest,src);
	printf("copied= %s\n",dest);
	return 0;
}

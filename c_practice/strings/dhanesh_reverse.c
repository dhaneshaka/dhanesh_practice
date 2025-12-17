#include<stdio.h>
#include<string.h>

int main()

{
	char name[100];
	int i,j;


	printf("enter the name\n");
	scanf("%s",name);

	j = strlen(name);


	printf("reversed name\n");

	for(i = j-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}

	printf("\n");
	return 0;
}



#include<stdio.h>
#include<string.h>

int main()
{
	char s[100]="hi dhanesh";
	char a[10],b[10];

	strcpy(a,strtok(s," "));
	strcpy(b,strtok(NULL," "));

	int i,j;

	for(i=0,j=strlen(a)-1;i<j;i++,j--)
	{
		char t=a[i];
		a[i]=a[j];
		a[j]=t;
	}

	for(i=0,j=strlen(b)-1;i<j;i++,j--)
	{
		char t=b[i];
		b[i]=b[j];
		b[j]=t;
	}
	printf("%s %s\n",a,b);
	return 0;

}



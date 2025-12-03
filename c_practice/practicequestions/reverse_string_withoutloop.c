#include<stdio.h>
#include<string.h>
void mystr_rev(char a[],int i,int j)
{
	if(i>=j)
	return;

	
	char t=a[i];
	a[i]=a[j];
	a[j]=t;
	mystr_rev(a,i+1,j-1);
}
int main()
{
	char s[100]="abc";
	mystr_rev(s,0,strlen(s)-1);
	printf("%s\n",s);
	return 0;
}


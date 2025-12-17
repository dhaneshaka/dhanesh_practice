#include<stdio.h>
#include<string.h>

void rev(char *s)
{
	int l=0;
	int r=strlen(s)-1;
	char t;
	while(1<r)
	{
		t=s[l];
		s[l]=s[r];
		s[r]=t;

		l++;
		r--;
	}
}
int main()
{
	char s[100]="abcd";
	rev(s);
	printf("%s\n",s);
	return 0;
}

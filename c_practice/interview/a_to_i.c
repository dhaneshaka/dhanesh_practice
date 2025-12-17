#include<stdio.h>

int my_atoi(char *s)
{
	int num=0;
	int sign=1;
	int i=0;

	while(s[i]==' '||s[i]=='\t')
		i++;
	if(s[i]=='-')
	{
		sign=-1;
		i++;
	}
	else if(s[i]=='+')
	{
		sign=+1;
		i++;
	}
	while(s[i]>='0' && s[i]<='9')
	{
		num=num*10+(s[i]-'0');
		i++;
	}
	return sign *num;
}
int main()
{
	char str1[]="-1234";
	char str2[]="5678";

	printf("%d\n",my_atoi(str1));
	printf("%d\n",my_atoi(str2));

	return 0;
}

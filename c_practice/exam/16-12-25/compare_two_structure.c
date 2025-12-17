#include<stdio.h>
#include<string.h>

struct data
{
	int x;
	char y;
};
int main()
{
	struct data d1={10,'A'};
	struct data d2={20,'B'};

	if(memcmp(&d1,&d2,sizeof(struct data))==0)
		printf("equal\n");
	else
		printf("not equal\n");
	return 0;
}


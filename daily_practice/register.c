#include <stdio.h>
        static int count;
int Register() 
{
    register int i;
    for(i = 0; i < 5; i++) 
    {
	    count++;
        printf("Register variable i: %d\n", i);
    }
    return count;
}

int main()
{

	//static int count=0;
	register int i;
	for (i=0;i<5;i++)
	{
    Register();
	printf("total values are : %d\n",count);
	}
    return 0;
}


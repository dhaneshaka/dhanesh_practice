#include<stdio.h>

int main()

{
        int n;

        printf("enter the number \n");
        scanf("%d",&n);

        if(((n>>3)&1)==1)
				   
	{
                printf("the number is set\n");
        }
        else
        {
                printf("the number is unset\n");
        }
        return 0;
}


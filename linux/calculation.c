#include<stdio.h>
#include<stdlib.h>
#include"headerfile.h"

int main()


{
	int choice,a,b;
	while(1)
	{

		printf("1.add 2.sub 3.mul 4.div 5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("enter the value a and b\n");
				scanf("%d%d",&a,&b);
				printf("the addition value is %d\n",add(a,b));
				break;
				

			case 2:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				printf("the subtractrion value is %d\n",sub(a,b));
				break;
			
			
			case 3:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				printf("the multiplication value is %d\n",mul(a,b));
				break;


			case 4:
				printf("enter the value of a and b\n");
				scanf("%d%d",&a,&b);
				printf("the division vale is %d\n",divi(a,b));
				break;


			case 5:
				printf("thank you\n");
				printf("exit");
				exit(0);
		}
	}
}





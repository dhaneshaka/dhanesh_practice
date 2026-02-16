#include<stdio.h>
int main()
{
	int f1;
	int f2;
	int sum;
	int n;

	printf("Enter the input value \n ");
  	scanf("%d",&n);
  
  	f1=0;
  	f2=0;
  	sum=1;
  
 	 while(sum<=n)
  	{	
     	f1 = f2 ;
     	f2 = sum;
     	sum  = f1+f2;
    	 printf("%d",sum);
  	}
	return 0; 
}




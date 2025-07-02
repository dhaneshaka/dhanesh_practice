#include<stdio.h>
int main ()
{
int n,p1,p2,p3,p4;
printf("bit swaping:\n");
printf("enter the number\n");
scanf("%d",&n);
printf("enter the first two bit position\n ");
scanf("%d%d",&p1,&p2);
printf("enter the next two bit position\n");
scanf("%d%d",&p3,&p4);
if (((n>>p1)&1)!=((n>>p2)&1))
{
	n=n^((1<<p1)|(1<<p2));
}
if(((n>>p3)&1)!=((n>>p4)&1))
{
	n=n^((1<<p3)|(1<<p4));
}
printf("number after swapingis %d",n);
return 0;
}

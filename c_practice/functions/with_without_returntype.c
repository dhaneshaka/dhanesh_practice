#include<stdio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
void add1(int a,int b);
void sub1(int a, int b);
void mul1(int a,int b);
void div1(int a,int b);

int main()
{
    printf("the addition %d\n",add(1,2));
    printf("subtraction %d\n",sub(3,2));
    printf("multiplication %d\n",mul(5,5));
    printf("division %d\n",div(10,5));
    add1(2,2);
    sub1(3,2);
    mul1(5,5);
    div1(10,5);
    
}
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)

{
    return a/b;    
}
void add1(int a,int b)
{
printf("the addition1 of %d\n",a+b);
}
void sub1(int a,int b)
{
    printf("subtraction 1 of %d\n",a-b);
}
void mul1(int a,int b)
{
    printf("multiplication1 of %d\n",a*b);
}
void div1(int a,int b)
{
    printf("division 1of %d\n",a/b);
}

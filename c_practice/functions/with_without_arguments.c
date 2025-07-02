#include<stdio.h>
#include"headerfile.h"
int main()
{
    printf("the addition %d\n",add());
    printf("subtraction %d\n",sub());
    printf("multiplication %d\n",mul(5,5));
    printf("division %d\n",div(10,5));
    add1(2,2);
    sub1(3,2);
    mul1();
    div1();
    
}
int add()
{
    int a=5;
    int b=5;
    return a+b;
}
int sub()
{
    int a=10;
    int b=5;
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
    printf("subtraction1 of %d\n",a-b);
}
void mul1()

{
    int a=5;
    int b=5;
    printf("multiplication1 of %d\n",a*b);
}
void div1()
{
    int a=10;
    int b=5;
    printf("division1 of %d\n",a/b);
}

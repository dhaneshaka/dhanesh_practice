
#include<stdio.h>

int arr[4]={10,20,30,40};

void display(int *p)
{
    printf("1st element is =%d",*(p + 0));
}

int main()
{
    display(arr);
    return 0;
}


#include<stdio.h>
int main()
{

int number=0x12345678;

number=((number >>24)&0x000000FF)|((number<<24)&0xFF000000)|number&(0x00FFFF00);
printf("%x",number);
return 0;
}

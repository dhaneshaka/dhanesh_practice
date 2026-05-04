#include<stdio.h>

int main()
{
	int num=0x12345678;

	num=((num<<24)&0xFF000000)|((num<<8)&0x00FF0000)|((num>>8)&0x0000FF00)|((num>>24)&0x000000FF);
	printf("%x",num);
	return 0;
}


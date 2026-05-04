#include<stdio.h>

int main()
{
	int n=0x10203040;
	int swaped;

	swaped=((n<<24)&0xFF000000)|((n>>24)&0x000000FF)|n&(0x00FFFF00);

	printf("before swap=0x%X\n",n);
	printf("after swaped=0x%X\n",swaped);

	return 0;
}


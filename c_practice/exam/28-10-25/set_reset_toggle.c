#include<stdio.h>

int main()
{
	int num=10;
	int pos=1;


	//set bit
	num = num |(1<<pos);
	printf("after set bit :%d\n",num);

	//reset bit 
	num = num &~(1<<pos);
	printf("after reset bit :%d\n",num);


	//toggle bit 
	num = num ^ (1<<pos);
	printf("after toggle bit:%d\n",num);

	return 0;
}

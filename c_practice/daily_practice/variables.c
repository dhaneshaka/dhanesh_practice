#include<stdio.h>

int main()
{


	int age;
	float temp;
	char grade;

//	printf("enter the char\n");
  //      scanf("%c", &grade);


	printf("enter the age\n");
	scanf("%d",&age);


	printf("enter the temp\n");
	scanf("%f", &temp);
	getchar();

	printf("enter the char\n");
	scanf("%c", &grade);
 	
	printf("\nYou entered:\n");
	printf("age %d\n",age);
	printf("temp:%.2f\n",temp);
	printf("grade %c\n",grade);


	return 0;

}
	



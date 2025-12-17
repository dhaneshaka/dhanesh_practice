#include<stdio.h>

struct student
{
	int roll;
	char name[50];
	float marks;
};
int main()
{
	struct student s;

	 printf("enter roll number:");
	 scanf("%d",&s.roll);



	printf("enter name of the student:");
	scanf("%s",s.name);


	//printf("enter roll number:");
	//scanf("%d",&s.roll);


	printf("enter marks:");
	scanf("%f",&s.marks);

	printf("\n");
        printf("roll number:%d\n",s.roll);
	printf("name :%s\n",s.name);
//	printf("roll number:%d\n",s.roll);
	printf("marks :%f\n",s.marks);

	return 0;
}

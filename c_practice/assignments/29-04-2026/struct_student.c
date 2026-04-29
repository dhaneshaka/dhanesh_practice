#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    int marks;
    float percentage;
};

int main()
{
    struct student s1;

    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%d", &s1.marks);

    s1.percentage = s1.marks;  

    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", s1.roll);
    printf("Name = %s\n", s1.name);
    printf("Marks = %d\n", s1.marks);
    printf("Percentage = %.2f%%\n", s1.percentage);

    return 0;
}

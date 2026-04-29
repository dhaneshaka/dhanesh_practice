#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

void dhanesh(struct student *s1)
{
    printf("Enter Roll Number: ");
    scanf("%d", &s1->roll);

    printf("Enter Name: ");
    scanf("%s", s1->name);

    printf("Enter Marks: ");
    scanf("%f", &s1->marks);
}

void display(struct student s1)
{
    printf("\nStudent Details:\n");
    printf("roll Numier = %d\n", s1.roll);
    printf("Name= %s\n", s1.name);
    printf("Marks= %.2f\n", s1.marks);
}

int main()
{
    struct student s1;

    dhanesh(&s1);     
    display(s1);    

    return 0;
}

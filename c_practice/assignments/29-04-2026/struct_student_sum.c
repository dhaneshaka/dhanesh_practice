#include <stdio.h>

struct dhanesh
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct dhanesh student1, student2;
    float sum;

    printf("Enter the student1 name = ");
    scanf("%s", student1.name);

    printf("Enter the roll number of student1 = ");
    scanf("%d", &student1.roll);

    printf("Enter the marks of student1 = ");
    scanf("%f", &student1.marks);

    printf("Enter the student2 name = ");
    scanf("%s", student2.name);

    printf("Enter the roll number of student2 = ");
    scanf("%d", &student2.roll);

    printf("Enter the marks of student2 = ");
    scanf("%f", &student2.marks);

    sum = student1.marks + student2.marks;

    printf("\nStudent Details\n");
    printf("Student1 Marks = %.2f\n", student1.marks);
    printf("Student2 Marks = %.2f\n", student2.marks);
    printf("Total Sum = %.2f\n", sum);

    return 0;
}

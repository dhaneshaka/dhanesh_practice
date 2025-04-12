#include <stdio.h>
typedef struct 
{
    char name[50];
    int age;
    float marks;
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    Student students[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name : %s\n", students[i].name);
        printf("Age  : %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}


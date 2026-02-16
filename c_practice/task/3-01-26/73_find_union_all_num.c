#include <stdio.h>

int main() {
    int a[5]={1,2,3,4,5};
    int b[5]={5,6,7,8,9};
    int n1=5;
    int n2=5;
    int i;

   /* printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

   */ printf("Union All of two arrays:\n");

    for (i = 0; i <5; i++)
        printf("%d ", a[i]);

    for (i = 0; i < 5; i++)
        printf("%d ", b[i]);

    return 0;
}


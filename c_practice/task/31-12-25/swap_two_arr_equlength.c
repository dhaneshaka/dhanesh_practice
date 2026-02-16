#include <stdio.h>

int main() 
{
    int n=5;
    int n1=5;
    int i, temp;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,0};

   /* printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter array A:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter array B:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

   */ for (i = 0; i <n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }

    printf("After swapping:\nArray A: ");
    for (i = 0; i <n; i++)
        printf("%d ", a[i]);

    printf("\nArray B: ");
    for (i = 0; i <n1; i++)
        printf("%d ", b[i]);

    return 0;
}


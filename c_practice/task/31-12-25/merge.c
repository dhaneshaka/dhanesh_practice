#include <stdio.h>

int main() 
{
    int n1=3, n2=5, i;
    int a[5]={1,2,3,4,5};
    int b[5]={6,7,8,9,0};
    int c[100];

   /* printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter first array:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter second array:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);
*/
    for (i = 0; i < n1; i++)
        c[i] = a[i];

    for (i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged array:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}


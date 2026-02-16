#include <stdio.h>

int main() {
    int a[5]={10,20,30,40,50};
    int b[5]={20,10,30,40,50};
    int  n,i;
    int equal=1;

    /*printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for (i = 0; i < n; i++)
       scanf("%d", &b[i]);
*/
    for (i = 0; i < 5; i++)
    {
        if (a[i] != b[i])
       	{
            equal=0;
            break;
        }
    }

    if (equal)
        printf("Arrays are equal\n");
    else
        printf("Arrays are not equal\n");

    return 0;
}


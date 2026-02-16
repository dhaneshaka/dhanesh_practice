#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=5, i;
/*
    printf("Enter size of the array: ");
    scanf("%d", &n);

 */  printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array in reverse order: ");
    for(i = n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

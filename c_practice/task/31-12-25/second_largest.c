#include <stdio.h>


int main()
{
    int arr[5]={1,2,3,4,5};
    int  n, i;
    int max1, max2;

   /* printf("Enter size of the array: ");
    scanf("%d", &size);

   */ printf("Enter elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max1 = max2;


    for(i=0; i<n; i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }

    printf("First largest = %d\n", max1);
    printf("Second largest = %d", max2);

    return 0;
}

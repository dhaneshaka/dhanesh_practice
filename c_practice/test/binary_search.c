#include <stdio.h>

int main()
{
    int a[] = {8,10,15,20,23,25,36,40,48,50,83};
    int low = 0, high = 11;
    int mid;
    int value;
    int found = 0;

    printf("Enter number to search: ");
    scanf("%d", &value);

    while (low<=high)
    {
        mid=(low+high)/2;

        if (a[mid]==value)
        {
            printf("Number %d found at position %d\n",value,mid+1);
            found = 1;
            break;
        }
        else if (value>a[mid])
            low=mid+1;
        else
            high=mid-1;
    }

    if (found==0)
        printf("Number %d not found in array\n",value);

    return 0;
}


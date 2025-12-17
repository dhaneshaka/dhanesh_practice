#include <stdio.h>

void bubblesort(int a[], int n) 
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++) 
    {
        for (j = 0; j < n - i - 1; j++) 
        {
            if (a[j] < a[j + 1]) // Descending order
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int a[] = {5, 3, 8, 4, 2};
    int n = sizeof(a) / sizeof(a[0]);
    int i;

    bubblesort(a, n);

    printf("Sorted array in descending order:\n");
    for (i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }

    return 0;
}


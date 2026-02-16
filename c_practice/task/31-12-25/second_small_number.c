#include <stdio.h>

int main()
{
    int n, i;
    int a[50], min, second;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = second = a[0];

    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
       	{
            second = min;
            min = a[i];
        }
       	else if (a[i] < second && a[i] != min)
       	{
            second = a[i];
        }
    }

    printf("Second smallest element: %d\n", second);

    return 0;
}


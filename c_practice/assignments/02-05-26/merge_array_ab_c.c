#include <stdio.h>

int main()
{
    int A[100], B[100], C[200];
    int n1, n2, i, j, k;

    printf("Enter size of array A: ");
    scanf("%d", &n1);

    printf("Enter elements of array A (sorted):\n");
    for(i = 0; i < n1; i++)
        scanf("%d", &A[i]);

    printf("Enter size of array B: ");
    scanf("%d", &n2);

    printf("Enter elements of array B (sorted):\n");
    for(i = 0; i < n2; i++)
        scanf("%d", &B[i]);

    i = j = k = 0;

    while(i < n1 && j < n2)
    {
        if(A[i] < B[j])
            C[k++] = A[i++];
        else
            C[k++] = B[j++];
    }

    while(i < n1)
        C[k++] = A[i++];

    while(j < n2)
        C[k++] = B[j++];

    printf("Merged array C:\n");
    for(i = 0; i < k; i++)
        printf("%d ", C[i]);

    return 0;
}

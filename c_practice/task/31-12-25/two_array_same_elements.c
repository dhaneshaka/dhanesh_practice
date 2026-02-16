#include <stdio.h>

int main() {
    int a[10], b[10];
    int n,i,j;
    int count;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter first array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter second array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                count++;
                break;
            }
        }
    }

    if (count == n)
        printf("Same elements\n");
    else
        printf("Not same elements\n");

    return 0;
}


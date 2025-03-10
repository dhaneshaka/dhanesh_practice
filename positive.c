#include <stdio.h>

int main() {
    int n;

	printf("Enter a number: ");
        scanf("%d", &n);

    if (n>0) {
        printf("%d is a Positive number.\n", n);
    } 
    else if(n<0) {
        printf("%d is a Negative number.\n", n);
    } 
    else {
        printf("The number is Zero.\n");
    }

    return 0;
}


#include <stdio.h>
#include <math.h>  
int main() {
    double num, squareRoot;
    printf("Enter a number: ");
    scanf("%lf", &num);
   if (num < 0) {
        printf("Square root of a negative number is not real.\n");
    } else {
      squareRoot = sqrt(num);
      printf("The square root of %.2lf is %.2lf\n", num, squareRoot);
    }

    return 0;
}


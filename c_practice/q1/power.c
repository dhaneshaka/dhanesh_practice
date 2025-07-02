#include <stdio.h>
#include <math.h>

int main() {
    double x, n, result;
    printf("Enter the base (X): ");
    scanf("%lf", &x);
    printf("Enter the exponent (N): ");
    scanf("%lf", &n);
    result=(x,n);
    printf("%.2lf^%.2lf = %.2lf\n", x, n, result);

    return 0;
}


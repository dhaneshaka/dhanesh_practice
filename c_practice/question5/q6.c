#include <stdio.h>

int main() 
{
    float num;
    int intNum;
    printf("Enter a floating-point number: ");
    scanf("%f", &num);
    intNum = (int) num;
    printf("Original float value: %.2f\n", num);
    printf("After typecasting to integer: %d\n", intNum);

    return 0;
}


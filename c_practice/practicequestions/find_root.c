#include <stdio.h>
#include <math.h>

int main()
{
    float num, root;

    printf("enter the number\n");
    scanf("%f", &num);

    root = sqrt(num);

    printf("the squareroot of %f is %f\n", num, root);

    return 0;
}


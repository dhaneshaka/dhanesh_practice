#include <stdio.h>

int main()
{
    int num, n;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Enter the bit position to set: ");
    scanf("%d", &n);

   
    num = num | (1 << n);

    printf("Number after setting %dth bit: %d\n", n, num);

    return 0;
}
                                                                                                                                                  
                

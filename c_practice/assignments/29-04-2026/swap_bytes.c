#include <stdio.h>

int main()
{
    unsigned int num = 0x12345678;
    unsigned int swapped;

    swapped = ((num & 0x000000FF) << 24) |
              ((num & 0x0000FF00) << 8)  |
              ((num & 0x00FF0000) >> 8)  |
              ((num & 0xFF000000) >> 24);

    printf("Original Number = 0x%X\n", num);
    printf("Swapped Number  = 0x%X\n", swapped);

    return 0;
}

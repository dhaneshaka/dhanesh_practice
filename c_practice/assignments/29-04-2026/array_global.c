#include <stdio.h>

int main()
{
    unsigned short num = 0xA5A5;

    printf("%X %X", (num >> 8) & 0xFF, num & 0xFF);
    return 0;
}

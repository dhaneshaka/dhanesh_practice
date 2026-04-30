#include<stdio.h>

int main()
{
    int number = 0x1234;

    number = ((number << 8) & 0xff00) |
             ((number >> 8) & 0x00ff);

    printf("\nafter swap numbers = %x", number);

    return 0;
}

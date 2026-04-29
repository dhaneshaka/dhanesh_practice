#include <stdio.h>

int main()
{
    int num = 1;
    char *ptr = (char *)&num;

    if(*ptr == 1)
        printf("Little Endian");
    else
        printf("Big Endian");

    return 0;
}

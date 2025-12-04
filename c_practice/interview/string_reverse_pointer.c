#include <stdio.h>

int main()
{
    char s[] = "dhanesh";
    char *p = s;

    while (*p) p++;

    while (p-- > s)
        putchar(*p);

    return 0;
}


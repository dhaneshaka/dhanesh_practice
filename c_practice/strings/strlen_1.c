#include <stdio.h>

size_t mystrlen(const char *s)
{
    size_t n = 0;
    int i = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        n++;
    }
    return n;
}

int main(void)
{
    char str[] = "abc";
    printf("%ld\n", mystrlen(str));

    return 0;
}


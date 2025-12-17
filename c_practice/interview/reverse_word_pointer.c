#include <stdio.h>
#include <string.h>

int reverse(char *p)
{
    char *start = p;
    char *end = p + strlen(p) - 1;

    while(start < end)
    {
        char t = *start;
        *start = *end;
        *end = t;

        start++;
        end--;
    }
}

int main()
{
    char s[100] = "hi dhanesh";
    char *a = strtok(s, " ");
    char *b = strtok(NULL, " ");

    reverse(a);
    reverse(b);

    printf("%s %s\n", a, b);

    return 0;
}


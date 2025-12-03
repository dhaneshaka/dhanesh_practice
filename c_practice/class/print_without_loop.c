#include <stdio.h>

int main()
{
    int i = 1;
START:
    if (i <= 100) {
        printf("%d ", i);
        i++;
        goto START;
    }
    return 0;
}


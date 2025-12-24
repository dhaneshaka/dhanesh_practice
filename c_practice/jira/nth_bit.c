#include <stdio.h>

int main()
{
    int n, pos;
    scanf("%d %d", &n, &pos);

    printf("%d\n", (n >> pos) & 1);

    return 0;
}


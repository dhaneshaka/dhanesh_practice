#include <stdio.h>

int main()
{

    int intVar;
    float floatVar;
    double doubleVar;
    char charVar;
    printf("Size of int: %lu bytes\n", sizeof(intVar));
    printf("Size of float: %lu bytes\n", sizeof(floatVar));
    printf("Size of double: %lu bytes\n", sizeof(doubleVar));
    printf("Size of char: %lu byte\n", sizeof(charVar));

    return 0;
}


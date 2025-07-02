#include <stdio.h>
#include <limits.h>

int main() { 
    	printf("Integer Data Types in C:\n\n");

    printf("Type: short int\n");
    printf("Size: %lu bytes\n", sizeof(short int));
    printf("Range: %d to %d\n\n", SHRT_MIN, SHRT_MAX);

    printf("Type: int\n");
    printf("Size: %lu bytes\n", sizeof(int));
    printf("Range: %d to %d\n\n", INT_MIN, INT_MAX);

    printf("Type: long int\n");
    printf("Size: %lu bytes\n", sizeof(long int));
    printf("Range: %ld to %ld\n\n", LONG_MIN, LONG_MAX);

    printf("Type: long long int\n");
    printf("Size: %lu bytes\n", sizeof(long long int));
    printf("Range: %lld to %lld\n", LLONG_MIN, LLONG_MAX);

    return 0;
}


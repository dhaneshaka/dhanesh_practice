#include <stdio.h>
void count() 
{
    static int count = 5; 
    count++;
    printf("%d\n", count);
}

int main()
{
    count();
    count ();
    return 0;
}


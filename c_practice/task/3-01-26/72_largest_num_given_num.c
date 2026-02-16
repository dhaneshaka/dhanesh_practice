#include <stdio.h>
#include <limits.h> 

int main() 
{
    int a;
    int b;
    int c; 

    printf("Enter the number of a: ");
    scanf("%d", &a);
 
    while (scanf("%d", & b) == 1) 
    { 
            if (b <a && b > c)
	    {
            c = b;
            }
    }

   
    if (c == a) 
    {
        printf("No number less than %d was entered.\n", a);
    } 
    else
    {
        printf("The largest number less than %d is: %d\n", a, c);
    }

    return 0;
}

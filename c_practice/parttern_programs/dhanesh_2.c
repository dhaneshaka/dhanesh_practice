#include <stdio.h>
#include <string.h>

int main()

{

    char name[] = "DHANESH";
    
    int len = strlen(name);

    for (int i = 0; i < len; i++)
   
    {
        for (int s = 0; s < len - i - 1; s++)
            printf(" ");

        for (int j = 0; j <= i; j++)

            printf("%c", name[j]);

        printf("\n");
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = (char *)malloc(20 * sizeof(char));

    if (str == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    strcpy(str, "Dynamic String");

    printf("%s\n", str);

    free(str);
    return 0;
}


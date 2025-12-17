#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int i, j = 0, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = '\0';

    len = strlen(str);

    for (i = len - 1; i >= 0; i--) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';

    printf("Reversed (without spaces): %s\n", result);

    return 0;
}


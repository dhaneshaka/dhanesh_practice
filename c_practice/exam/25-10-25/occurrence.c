#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[50], word[50], temp[500];
    int count = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    printf("Enter the word to search: ");
    scanf("%s", word);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fp, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            count++;
        }
    }

    fclose(fp);

    printf("The word '%s' occurred %d times in the file.\n", word, count);

    return 0;
}


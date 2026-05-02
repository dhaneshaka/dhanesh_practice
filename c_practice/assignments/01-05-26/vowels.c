#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;   // pointer to start

    while(*ptr != '\0')
    {
        // Check if alphabet
        if((*ptr >= 'a' && *ptr <= 'z') || (*ptr >= 'A' && *ptr <= 'Z'))
        {
            // Check vowel
            if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' ||
               *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }

        ptr++; // move pointer
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}

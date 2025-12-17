#include <stdio.h>

int main() {
    char str[100];
    char *p=str;
    int count = 0;

    printf("Enter a string: ");
    scanf("%[^\n]", str);   // read string with spaces too

    p = str;   // pointer to string

    while (*p) {   // loop until '\0'
        if (*p=='z'||*p=='H'||*p=='A'||*p=='N'||*p=='E'||*p=='S'||*p=='H'||
            *p=='Z'||*p=='h'||*p=='a'||*p=='n'||*p=='e'||*p=='s'||*p=='h'||
	   *p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u') {
            count++;
        }
        p++;  // go to next char
    }

   // printf("string = %s\n", str);
    printf("vowels=%d\n",count);
    printf("matched letters in \"dhanesh\"=%d\n",count);
    return 0;
}


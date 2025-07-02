#include <stdio.h>
#include <string.h>
struct Book
{
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct Book books[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter details for Book %d:\n", i + 1);

        printf("Title: ");
        scanf(" %[^\n]s", books[i].title);
        printf("Author: ");
        scanf(" %[^\n]s", books[i].author);
        printf("Price: ");
        scanf("%f", &books[i].price);
    }
    int maxIndex = 0, minIndex = 0;
    for (i = 1; i < 3; i++)
    {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
        if (books[i].price < books[minIndex].price) {
            minIndex = i;
        }
    }
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", books[maxIndex].title);
    printf("Author: %s\n", books[maxIndex].author);
    printf("Price: %.2f\n", books[maxIndex].price);
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", books[minIndex].title);
    printf("Author: %s\n", books[minIndex].author);
    printf("Price: %.2f\n", books[minIndex].price);

    return 0;
}


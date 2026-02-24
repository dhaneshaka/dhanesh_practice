#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtMiddle(struct Node** head, int data) {
    int count = countNodes(*head);
    int mid = count / 2;

    struct Node* newNode = createNode(data);
    
    int main() {
    struct Node* head = NULL;

    append(&head, 10);
    append(&head, 20);
    append(&head, 30);
    append(&head, 40);

    printf("Original List: ");
    display(head);

    insertAtMiddle(&head, 99);

    printf("After Inserting at Middle: ");
    display(head);void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}


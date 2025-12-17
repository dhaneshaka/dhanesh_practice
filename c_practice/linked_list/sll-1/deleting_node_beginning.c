#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node
{
    int data;
    struct Node* next;
};
void insertAtBeginning(struct Node** head, int value) 
    {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

// Function to delete node at beginning
void deleteAtBeginning(struct Node** head)
{
    if (*head == NULL)
    {
        printf("List is already empty.\n");
        return;
    }
    struct Node* temp = *head;
    *head = (*head)->next;
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
}

// Function to display the linked list
void displayList(struct Node* head) 
{
    struct Node* temp = head;
    printf("Linked list: ");
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    struct Node* head = NULL;

    // Insert some nodes
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    printf("Before deletion:\n");
    displayList(head);

    // Delete node at beginning
    deleteAtBeginning(&head);

    printf("After deletion:\n");
    displayList(head);

    return 0;
}


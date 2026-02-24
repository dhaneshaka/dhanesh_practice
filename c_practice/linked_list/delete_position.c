#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

/* Insert at beginning */
void insertAtBeginning(struct node **head, int data) {
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = *head;
    *head = newnode;
}

/* Delete node at given position (1-based) */
void deleteAtPosition(struct node **head, int pos) {
    struct node *temp = *head;
    struct node *prev = NULL;
    int i;

    if (*head == NULL) {
        printf("List is empty\n");
        return;
    }

    // Delete first node
    if (pos == 1) {
        *head = temp->next;
        free(temp);
        return;
    }

    // Traverse to position
    for (i = 1; i < pos && temp != NULL; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of range\n");
        return;
    }

    prev->next = temp->next;
    free(temp);
}

/* Display list */
void display(struct node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct node *head = NULL;
    int pos;

    // Create list using insert at beginning
    // Final list: 10 -> 20 -> 30 -> 40 -> 50
    insertAtBeginning(&head, 50);
    insertAtBeginning(&head, 40);
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    printf("Before deletion:\n");
    display(head);

    printf("\nEnter position to delete: ");
    scanf("%d", &pos);

    deleteAtPosition(&head, pos);

    printf("\nAfter deletion:\n");
    display(head);

    return 0;
}

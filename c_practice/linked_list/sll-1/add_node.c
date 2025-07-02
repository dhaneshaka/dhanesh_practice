#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};
struct Node* create_Node(int value)
{
    struct Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
    if (new_Node == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    new_Node->data = value;
    new_Node->next = NULL;
    return new_Node;
}
int main()
{
    struct Node* head = NULL;

    head = create_Node(12);

  
    printf("Node created with value: %d\n", head->data);

  
    free(head);

    return 0;
}


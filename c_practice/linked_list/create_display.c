#include<stdio.h>
#include<stdlib.h>


struct Node
{
	int data;
	struct Node* next;
};

struct Node* createNode(int value)
{

	struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));

	newNode->data=value;
	newNode->next=NULL;
	return newNode;
}

void printlist(struct Node* head)
{
	struct Node* temp =head;

	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp =temp->next;
	}
		printf("NULL\n");
}

int main()
{
	struct Node* head=NULL;
	struct Node* second=NULL;
	struct Node* third=NULL;


	head=createNode(10);
	second=createNode(20);
	third=createNode(30);


	head->next=second;
	second->next=third;

	printlist(head);
	return 0;
}


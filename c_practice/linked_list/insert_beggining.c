#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
	int data;
	struct Node*link;
}Node;

Node* createNode(int data)
{
	Node*newNode=malloc(sizeof(Node));

	newNode->data=data;

	newNode->link=NULL;
	return newNode;
}
void* insertatbeging(Node**headptr,int data)
	{
		Node* newNode=createNode(data);
		newNode->link=*headptr;
		*headptr=newNode;
	}
void display(Node*head)

{
	Node*temp=NULL;
	temp=head;
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->link;
	}
}
int main()
{
	Node*head=NULL;
	head=createNode(10);
	insertatbeging(&head,20);
	insertatbeging(&head,30);
	display(head);
}

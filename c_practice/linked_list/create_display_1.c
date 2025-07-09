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

	if(newNode==NULL)
	{
		printf("memory allocation failed\n");
		exit(1);
	}

	newNode->data=value;
	newNode->next=NULL;
	return newNode;
}

void insertEnd(struct Node** head,int value)
{
	struct Node* newNode=createNode(value);
	if(*head==NULL)
	{
		*head =newNode;
	}
	else
	{
		struct Node* temp=*head;
		while(temp->next !=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
}



void displayList(struct Node* head)
{
	struct Node* temp =head;
	printf("linked list: ");
	while(temp !=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

int main()
{
	struct Node* head=NULL;
	int n,value,i;

	printf("number of nodes to create\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("enter the data for node %d:",i);
		scanf("%d",&value);
		insertEnd(&head,value);

	}
	displayList(head);
	return 0;
}



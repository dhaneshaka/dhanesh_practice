#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *next;
};

int main()
{
	struct node *head=NULL;
	struct node *newnode;
	struct node *temp;
	int i,value;

	for(i = 0; i < 5; i++)
	{
		printf("enter the value");
		scanf("%d",&value);

		newnode=(struct node*)malloc(sizeof(struct node));

		newnode->data=value;
		newnode->next=head;
		head=newnode;

	};
	temp=head;

	printf("\n Linked list");
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;

	}
	printf("NULL\n");
	return 0;
}


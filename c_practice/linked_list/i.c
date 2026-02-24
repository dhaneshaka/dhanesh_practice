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

	int i,n;

	for(i=0;i<3;i++)
	{
		printf("enter the value of n=");
		scanf("%d",&n);

		newnode=(struct node*)malloc(sizeof(struct node));

		newnode->data=n;
		newnode->next=head;
		head=newnode;

	};

	temp=head;

	printf("\n linked list");

	while(temp!=NULL);
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	return 0;
}



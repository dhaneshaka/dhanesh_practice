#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node* next;
};


int main()
{

	int value,n;

	struct node *head=NULL;
	struct node *temp=NULL;
	struct node *newnode=NULL;
	
	printf("enter the number of nodes ");
	scanf("%d",&n);


	for(int i=1;i<=n;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("enter the values for node %d\n",i);
		scanf("%d",&value);

		newnode->data=value;
		newnode->next=NULL;

		if(head==NULL)
		{
			head=newnode;
			temp=head;
		}

		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}
	temp=head;
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
	return 0;

u}

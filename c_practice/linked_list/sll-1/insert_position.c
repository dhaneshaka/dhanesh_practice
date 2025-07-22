#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node *next;
};

struct node *createnode(int data);
struct node * newnode=(struct node*)malloc(sizeof(struct node));
newnode->data=data;
newnode->next=NULL;
return newnode;


void displaylist(struct node*head)
{
	struct  node*temp=head;
	printf("linked list\n");
	
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}

int main()
{
	struct node;

	*head=NULL;
	*temp=NULL;
	*newnode=NULL;


	int n,i,pos,value;

	printf("enter the number of nodes\n");
	scanf("%d",&n);

	for(i=1;i<n;i++)
	{
		printf("enter the values for nodes%d\n");
		scanf("%d"&value);

		newnode=createnode(value);
		if(head==NULL)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
	}



	printf("enter value to insert\n");
	sacnf("%d",&value);

	newnode=createnode(value);

	printf("enter position to insert at\n");
	scanf("%d",&pos);

	if(pos==1)
	{
		newnode->=head;
		head=newnode;
	}
	else
	{
		temp=head;
		for (i=1;i<pos-1&&temp !=NULL;i++)
		{
			temp=temp->next;
		}
		if(temp==NULL)
		{
			printf("invaild position\n");
		}
		else
		{
			newnode->next=temp->next;
			temp->next=newnode;
		}
	}
	displaylist(head);
	return 0;
}

		




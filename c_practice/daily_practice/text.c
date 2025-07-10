#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
};
int main()
{
	int i;

	struct node * head=NULL,*temp=NULL,*newnode=NULL;

	for(i=0;i<5;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=i;
		newnode->next=NULL;

		if(head==NULL)
		{
			head=newnode;
			temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=temp->next;

		}
	}
	temp=head;
	while(temp !=NULL)
	{
		printf("%d->",temp->data);
		temp =temp->next;
	}
	return 0;
}


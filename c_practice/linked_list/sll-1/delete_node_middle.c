#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct node * next;
};

int main()
{

	struct *head=NULL,*temp=NULL,*newNode=NULL;

	int n,value;

	printf("enter the number of nodes\n");
	scanf("%d",&n);

	if(int i=1;i<=n;i++)
	{
		newNode=(struct Node*)malloc(sizeof(struct NOde));

		printf("enter the value for  nodes\n");
		scanf("%d",value);

		newNode->data=value;
		newNode->next=NULL;

		if(head == NUll)
		{
			head=newNode;
			temp=head;
		}
		else
		{
			temp->next=newNode;
			temp=newnode;
		}
	}


#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node * next;
};


int main()
{
	struct Node * head=NULL,*temp=NULL,*newNode=NULL;
	
	int n,value,i;
	printf("enter the number of nodes\n");
	scanf("%d",&n);

for(i=1;i<=n;i++)
{
	 newNode=(struct Node*)malloc(sizeof(struct Node));

	printf("enter the values for nodes %d\n",i);
	scanf("%d",&value);

	newNode->data=value;
	newNode->next=NULL;

	if (head ==NULL)
	{
		head=newNode;
		temp=head;
	}
	else
	{
		temp->next=newNode;
		temp=newNode;
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
}



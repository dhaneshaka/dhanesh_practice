#include<stdio.h>
#include<stdlib.h>


struct node
{
	int data;
	struct node*link;
};

int main()
{


	struct node*head=(struct node*)malloc(sizeof(struct node));
	if (head == NULL)
	{
		printf("memory allocation failed\n");
		return 1;
	}




	head ->data=0;
	head ->link=NULL;
	



	printf("data in the node %d\n",head->data);
	free(head);
	return 0;
}


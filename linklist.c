#include <stdio.h>

main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head, *newnode, *tempnode;
	head=0;int choice=1;
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data for new node : \n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0)
		{
			//newnode->next=0;
			head=tempnode=newnode;
		}
		else
		{
			tempnode->next=newnode;
			tempnode=newnode;
		}
		printf("\nEnter 1 if you want to add new node else enter 0 to terminate the program!\n");
		scanf("%d",&choice);
	}
	while(choice == 1);
	printf("\nThe elements in the linklist are as follows :-\n");
	tempnode=head;
	while(tempnode != 0)
	{
		printf(" %d\t",tempnode->data);
		tempnode=tempnode->next;
	}
		
}

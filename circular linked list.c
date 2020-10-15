#include <stdio.h>

main()
{
	struct node 
	{
		int data;
		struct node *next;
	};
	struct node *head,*newnode,*tempnode;
	head=0;
	void display()
	{
		if (head==0)
		{
			printf("\nThe linked list is empty.\n");
		}
		else
		{
			printf("\nThe elements of the linked list are:- \n");
			struct node *temp;
			temp=head;
			while(temp->next != head)
			{
				printf("\n %d \n",temp->data);
				temp=temp->next;
			}
			printf("\n %d \n",temp->data);
		}
		
	};
	
	int choice=1;
	
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data for the newnode:\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		
		if(head==0)
		{
			head=tempnode=newnode;
		}
		else
		{
			tempnode->next=newnode;
			tempnode=newnode;
		}
		tempnode->next=head;
		
		printf("\nEnter 1 to continue else press 0\n");
		scanf("%d",&choice);
	}
	display();	
}

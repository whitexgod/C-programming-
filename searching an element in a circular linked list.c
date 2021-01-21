#include <stdio.h>
#include <malloc.h>

main()
{
	printf("CIRCULAR LINKED LIST,Search\n");
	struct node 
	{
		int data;
		struct node *next;
	};
	struct node *head,*newnode,*tempnode;
	head=0;
	void display()
	{
		printf("\nThe elements of the Circular linked list are:- \n");
		struct node *temp;
		temp=head;
		while(temp->next != head)
		{
			printf("%d \t",temp->data);
			temp=temp->next;
		}
		printf("%d \n",temp->data);	
		free(temp);	
	};	
	void search()
	{
		int element;
		printf("\nEnter the element to the searched for in the linked list : ");
		scanf("%d",&element);
		int flag=0;
		struct node *temp;
		temp=head;
		while(temp->next!=head)
		{
			if(temp->data==element)
			{
				printf("\nElement %d is present\n",element);flag=1;
			}
			temp=temp->next;
		};
		if(temp->data==element)
		{
			printf("\nElement %d is present\n",element);flag=1;
		}
		if(flag==0)
		{
			printf("\nThe element is not present in the linked list\n");
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
	search();
	display();	
}

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head,*tail;

void display()
{
	struct node *temp;
	temp=head;
	while(temp!=0)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
}

void create()
{
	struct node *newnode;
	head=0;
	int choice=1;
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data : ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		if(head==0)
		{
			head=tail=newnode;
		}
		else
		{
			tail->next=newnode;
			newnode->prev=tail;
			tail=newnode;
		}
		printf("\nEnter 1 to continue creating node's else enter 0\n");
		scanf("%d",&choice);
	}
}

void reverse()
{
	struct node *current,*nextnode;
	current=head;
	while(current != 0)
	{
		nextnode=current->next;
		current->next=current->prev;
		current->prev=nextnode;
		current=nextnode;
	}
	current=head;
	head=tail;
	tail=current;
}

void options()
{
	printf("\nEnter 1 to create a doubly linked list. ");
	printf("\nEnter 2 to reverse the doubly linked list. ");
	printf("\nEnter 3 to display the doubly linked list.");
	printf("\nEnter 0 to terminate the program.\n");
}

int main()
{
	int input,flag=1;
	while(flag==1)
	{
		options();
		scanf("%d",&input);
		switch(input)
		{
			case 0:
				printf("\nTerminating the program.\n");
				flag=0;
				break;
			case 1:
				create();
				break;
			case 2:
				if(head==0)
				{
					printf("\nThe doubly linked list is empty.\n");
				}
				else
				{
					reverse();
					printf("\nThe reversed doubly linked list is : \n");
					display();
				}
				break;
			case 3:
				printf("\nThe doubly linked list is : \n");
				display();
				break;
			default:
				printf("\nInvalid choice.\n");
		}
	}
}

#include<stdio.h>

struct node
{
	int data;
	struct node *next;
	struct node *prev;
};

struct node *head,*newnode;

void create()
{
	head=0;
	int choice=1;
	struct node *temp;
	while(choice==1)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data : ");
		scanf("%d",&newnode->data);
		newnode->prev=0;
		newnode->next=0;
		if(head==0)
		{
			head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			newnode->prev=temp;
			temp=newnode;
		}
		printf("\nEnter 1 to continue creating node's else enter 0\n");
		scanf("%d",&choice);
	}
}

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

int main()
{
	create();
	display();
}

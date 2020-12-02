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
	printf("\nThe doubly linked list is : \n");
	while(temp!=0)
	{
		printf(" %d ",temp->data);
		temp=temp->next;
	}
}

int length()
{
	struct node *temp;
	int c=0;
	temp=head;
	while(temp!=0)
	{
		c=c+1;
		temp=temp->next;
	}
	return c;
}

void create()
{
	struct node *newnode;
	head=0;int choice=1;
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

void insertAtBeginning()
{
	if(head==0)
	{
		printf("\nThe list is empty. \n");
	}
	else
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data : ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		head->prev=newnode;
		newnode->next=head;
		head=newnode;
	}	
}

void insertAtEnd()
{
	if(head==0)
	{
		printf("\nThe list is empty. \n");
	}
	else
	{
		struct node *newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data : ");
		scanf("%d",&newnode->data);
		newnode->next=0;
		newnode->prev=0;
		tail->next=newnode;
		newnode->prev=tail;
		tail=newnode;
	}	
}

void insertAtPos()
{
	if(head==0)
	{
		printf("\nThe list is empty. \n");
	}
	else
	{
		int pos,l;
		l=length();
		printf("\nEnter the position where you to enter the data : ");
		scanf("%d",&pos);
		if(pos>0 && pos<=l)
		{
			if(pos==1)
			{
				insertAtBeginning();
			}
			else if(pos==l)
			{
				insertAtEnd();
			}
			else
			{
				int i=1;
				struct node *newnode,*temp;
				newnode=(struct node*)malloc(sizeof(struct node));
				printf("\nEnter the data : ");
				scanf("%d",&newnode->data);
				newnode->next=0;
				newnode->prev=0;
				temp=head;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}				
				newnode->prev=temp;
				newnode->next=temp->next;
				temp->next=newnode;
				newnode->next->prev=newnode;
			}
		}
		else
		{
			printf("\nEntered position is INVALID\n");
		}
	}
}

void insertAfterPos()
{
	if(head==0)
	{
		printf("\nThe list is empty. \n");
	}
	else
	{
		int pos,l;
		l=length();
		printf("\nEnter the position where you to enter the data : ");
		scanf("%d",&pos);
		if(pos>0 && pos<=l)
		{
			int i=1;
			struct node *newnode,*temp;
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("\nEnter the data : ");
			scanf("%d",&newnode->data);
			newnode->next=0;
			newnode->prev=0;
			temp=head;
			while(i<pos)
			{
				temp=temp->next;
				i++;
			}				
			newnode->prev=temp;
			newnode->next=temp->next;
			temp->next=newnode;
			newnode->next->prev=newnode;
		}
		else
		{
			printf("\nEntered position is INVALID\n");
		}
	}
}

void deleteFromBeginning()
{
	if(head==0)
	{
		printf("\nThe list is Empty.\n");
	}
	else
	{
		struct node *temp;
		temp=head;
		head=head->next;
		head->prev=0;
		free(temp);	
	}
}

void deleteFromEnd()
{
	if(head==0)
	{
		printf("\nThe list is Empty.\n");
	}
	else
	{
		struct node *temp;
		temp=tail;
		tail->prev->next=0;
		tail=tail->prev;
		free(temp);
	}
}

void deleteFromPos()
{
	if(head==0)
	{
		printf("\nThe list is empty.\n");
	}
	else
	{
		int i=1,pos;
		struct node *temp;
		printf("\nEnter the position from where you want to delete the data.\n");
		scanf("%d",&pos);
		temp=head;
		while(i<pos)
		{
			temp=temp->next;
			i++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
	}
}

void deleteFromElement()
{
	if(head==0)
	{
		printf("\nThe list is Empty.\n");
	}
	else
	{
		int i=1,pos=0;
		struct node *temp;
		int element;
		printf("\nEnter the element you want to delete from the list. \n");
		scanf("%d",&element);
		temp=head;
		while(temp != 0)
		{
			i++;
			if(temp->data==element)
			{
				pos=i;
			}
			temp=temp->next;
		}
		if(pos==0)
		{
			printf("\nThe entered element is not present in the list. \n");
		}
		else
		{
			//printf("\n %d \n",position-1);
			i=1;
			temp=head;
			while(i<pos-1)
			{
				temp=temp->next;
				i++;
			}
			temp->prev->next=temp->next;
			temp->next->prev=temp->prev;
			free(temp);
		}
	}
}

void options()
{
	printf("\nEnter 1 to create a doubly linked list. ");
	printf("\nEnter 2 to insert at the beginning of the doubly linked list. ");
	printf("\nEnter 3 to insert at the end of the doubly linked list. ");
	printf("\nEnter 4 to insert at the said position of the doubly linked list. ");
	printf("\nEnter 5 to insert at after the said position of the doubly linked list. ");
	printf("\nEnter 6 to delete the beginning of the doubly linked list. ");
	printf("\nEnter 7 to delete the end of the doubly linked list. ");
	printf("\nEnter 8 to delete the said position of the doubly linked list. ");
	printf("\nEnter 9 to delete the said element of the doubly linked list. ");
	printf("\nEnter 10 to display the doubly linked list. ");
	printf("\nEnter 0 to terminate the program. \n");
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
				insertAtBeginning();
				break;
			case 3:
				insertAtEnd();
				break;
			case 4:
				insertAtPos();
				break;
			case 5:
				insertAfterPos();
				break;
			case 6:
				deleteFromBeginning();
				break;
			case 7:
				deleteFromEnd();
				break;
			case 8:
				deleteFromPos();
				break;
			case 9:
				deleteFromElement();
				break;
			case 10:
				display();
				break;
			default:
				printf("\nInvalid choice!\n");			
		}
	}
	return 0;
}

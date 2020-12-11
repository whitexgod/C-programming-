#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node *head1,*head2,*newnode,*tempnode1,*tempnode2;
struct node *sorting_head,*sorting_tail;

main()
{
	int i,n1,n2;
	printf("\nFor the first sorted linked list :- \n");
	printf("Enter the number of nodes to be created : ");
	scanf("%d",&n1);
	head1=0;
	for(i=0;i<n1;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data for the %d node : ",i+1);
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head1==0)
		{
			head1=tempnode1=newnode;
		}
		else
		{
			tempnode1->next=newnode;
			tempnode1=newnode;
		}
	}
	
	printf("\nFor the second sorted linked list :- \n");
	printf("Enter the number of nodes to be created : ");
	scanf("%d",&n2);
	head2=0;
	for(i=0;i<n2;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the data for the %d node : ",i+1);
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head2==0)
		{
			head2=tempnode2=newnode;
		}
		else
		{
			tempnode2->next=newnode;
			tempnode2=newnode;
		}
	}
	
	sorting_head=sorting_tail=0;
	if(head1==0)
	{
		sorting_head=head2;
		sorting_tail=tempnode2;
	}
	else if(head2==0)
	{
		sorting_head=head1;
		sorting_tail=tempnode1;
	}
	else
	{
		do
		{
			if((head1->data) < (head2->data))
			{
				if(sorting_head==0)
				{
					sorting_head=sorting_tail=head1;
					head1=sorting_tail->next;
				}
				else
				{
					sorting_tail->next=head1;
					sorting_tail=head1;
					head1=sorting_tail->next;
				}	
			}
			else
			{
				if(sorting_head==0)
				{
					sorting_head=sorting_tail=head2;
					head2=sorting_tail->next;
				}
				else
				{
					sorting_tail->next=head2;
					sorting_tail=head2;
					head2=sorting_tail->next;
				}
			}
		}while( ( head1 !=0 ) || ( head2 != 0 ) );
		if(head1==0)
		{
			sorting_tail->next=head2;
		}
		if(head2==0)
		{
			sorting_tail->next=head1;
		}		
	}
	printf("\nThe sorted linked list is as follows :- \n ");
	struct node *temp;
	temp=sorting_head;
	while (temp !=0)
	{
		printf(" %d ", temp->data);
		temp=temp->next;
	}
}

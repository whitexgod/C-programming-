#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *next;
} *temp;

struct node *head1, *head2, *newnode, *tempnode1, *tempnode2;
struct node *sorting_head, *sorting_tail;

void main()
{
	int i, n1, n2;
	printf("\nFor the first sorted linked list :- \n");
	printf("Enter the number of nodes to be created : ");
	scanf("%d", &n1);
	head1 = NULL;
	for (i = 0; i < n1; i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("\nEnter the data for the %d node : ", i + 1);
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		if (head1 == NULL)
		{
			head1 = tempnode1 = newnode;
		}
		else
		{
			tempnode1->next = newnode;
			tempnode1 = newnode;
		}
	}

	printf("\nFor the second sorted linked list :- \n");
	printf("Enter the number of nodes to be created : ");
	scanf("%d", &n2);
	head2 = NULL;
	for (i = 0; i < n2; i++)
	{
		newnode = (struct node *)malloc(sizeof(struct node));
		printf("\nEnter the data for the %d node : ", i + 1);
		scanf("%d", &newnode->data);
		newnode->next = NULL;
		if (head2 == NULL)
		{
			head2 = tempnode2 = newnode;
		}
		else
		{
			tempnode2->next = newnode;
			tempnode2 = newnode;
		}
	}

	sorting_head = sorting_tail = NULL;
	if (head1 == NULL)
	{
		sorting_head = head2;
		sorting_tail = tempnode2;
	}
	else if (head2 == NULL)
	{
		sorting_head = head1;
		sorting_tail = tempnode1;
	}
	else
	{
		if ((head1->data) < (head2->data))
		{	
			sorting_head = head1;
			head1 = head1->next;
		}
		else
		{
			sorting_head = head2;
			head2 = head2->next;
		}
		sorting_tail = sorting_head;
		while ((head1 != NULL) && (head2 != NULL))
		{
			if ((head1->data) < (head2->data))
			{
				sorting_tail->next = head1;
				sorting_tail = sorting_tail->next;
				head1 = head1->next;
			}
			else
			{
				sorting_tail->next = head2;
				sorting_tail = sorting_tail->next;
				head2 = head2->next;
			}
		}
		if (head1 == NULL)
		{
			sorting_tail->next = head2;
		}
		if (head2 == NULL)
		{
			sorting_tail->next = head1;
		}
	}
	printf("\nThe sorted linked list is as follows :- \n ");
	temp = sorting_head;
	while (temp != NULL)
	{
		printf(" %d ", temp->data);
		temp = temp->next;
	}
}

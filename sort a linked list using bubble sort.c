#include <stdio.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *next;
};

int main()
{
	struct node *head,*newnode,*tempnode;
	head=0;int choice=1;int counter=0;
	printf("Enter the Linked List :- \n");
	do
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter data for new node : \n");
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
		printf("\nEnter 1 if you want to add new node else enter 0.\n");
		scanf("%d",&choice);
	}
	while(choice == 1);
	printf("\nThe elements in the linklist are as follows :-\n");
	tempnode=head;
	while(tempnode != 0)
	{
		counter++;
		printf(" %d\t",tempnode->data);
		tempnode=tempnode->next;
	};
	free(tempnode);
	printf("\n");
	int array[counter],n, c, d, swap;
	tempnode=head;c=0;n=counter;
	while(tempnode != 0)
	{
		array[c]=tempnode->data;
		c++;
		tempnode=tempnode->next;
	};
	free(tempnode);
	for (c = 0 ; c < n - 1; c++)
	{
	    for (d = 0 ; d < n - c - 1; d++)
	    {
	      if (array[d] > array[d+1]) /* For decreasing order use '<' instead of '>' */
	      {
	        swap       = array[d];
	        array[d]   = array[d+1];
	        array[d+1] = swap;
	      }
	    }
	}	
	printf("Sorted linked list in ascending order using Bubble Sort:\n");
	
	for (c = 0; c < n; c++)
		printf("%d\t", array[c]);
	
	return 0;
}

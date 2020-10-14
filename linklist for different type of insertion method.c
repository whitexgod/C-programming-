#include <stdio.h>

main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node *newnode,*head,*tempnode,*tempo,*var1,*temp;
	int i,c=0,pos;
	head=0;
	int choice=1,input;
	
	while(choice==1)
	{
		printf("\nEnter 1 to create a node.\n");
		printf("Enter 2 to insert a node at front.\n");
		printf("Enter 3 to insert a node at intermediate.\n");
		printf("Enter 4 to insert a node at the end.\n");
		printf("Enter 5 to display the link list.\n");
		printf("Enter 0 to terminate the program.\n");
		scanf("%d",&input);
		
		switch(input)
		{
			case 0:
				printf("Terminating the program");
				choice=0;
				break;
				
			case 1:
				newnode=(struct node*)malloc(sizeof(struct node));
				printf("\nA new node has been created.\n");
				printf("\nEnter an element for the node.\n");
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
				break;
				
			case 2:
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
					tempo=head;
					head=newnode;
					newnode->next=tempo;
				}
				printf("\nOperation performed successfully.\n");
				break;
				
			case 3:
				if(head != 0)
				{
					printf("\nThe elements in the linklist are as follows :-\n");
					temp=head;
					while(temp != 0)
					{
						printf(" %d\t",temp->data);
						temp=temp->next;
						c++;
					}	
					printf("\n");
					if(c>2)
					{
						newnode=(struct node*)malloc(sizeof(struct node));
						printf("\nEnter the intermediate position after which you want to enter a node.\n");
						scanf("%d",&pos);
						i=1;tempo=head;
						while(i<pos)
						{
							tempo=tempo->next;
							i++;
						}						
						printf("\nEnter data for new node : \n");
						scanf("%d",&newnode->data);
						newnode->next=tempo->next;
						tempo->next=newnode;					
						printf("\nOperation performed successfully.\n");
					}
					else if(c==2)
					{
						printf("\n As there is only 2 elements in the list no intermediate position found!\n");
					}
					else
					{
						printf("\n As there is only 1 elements in the list no intermediate position found!\n");
					}
					c=0;
					break;
				}
				else
				{
					printf("\n No intermediate position found!\n");
					break;
				}
					
			case 4:
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
				printf("\nOperation performed successfully.\n");
				break;
				
			case 5:
				if(head != 0)
				{
					printf("\nThe elements in the linklist are as follows :-\n");
					temp=head;
					while(temp != 0)
					{
						printf(" %d\t",temp->data);
						temp=temp->next;
					}
					printf("\n");		
				}
				else
				{
					printf("\nThere is no element in the list!.\n");
				}
				break;
												
			default:
				printf("\nwrong choice!\n")	;	
		}
	}
	
}

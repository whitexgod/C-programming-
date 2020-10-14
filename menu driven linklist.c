#include <stdio.h>

main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head,*newnode,*tempnode,*tempo,*tempoo,*tempnext1,*tempnext2,*temp,*prevnode;
	head=0;
	int pos,i,c=0;
	int choice=1,input;
	while(choice == 1)
	{
		printf("\nEnter 1 to create a node.\n");
		printf("Enter 2 to insert a node at front.\n");
		printf("Enter 3 to insert a node at intermediate.\n");
		printf("Enter 4 to insert a node at the end.\n");
		printf("Enter 5 to delete a node from front.\n");
		printf("Enter 6 to delete a node from intermediate.\n");
		printf("Enter 7 to delete a node from the end.\n");
		printf("Enter 8 to display the link list.\n");
		printf("Enter 0 to terminate the program.\n");
		scanf("%d",&input);
		
		switch (input)
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
					if(c>1)
					{
						newnode=(struct node*)malloc(sizeof(struct node));
						printf("\nEnter the intermediate position after which you want to enter a node.\n");
						scanf("%d",&pos);
						if (pos<=c)
						{
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
						else
						{
							printf("\nInvalid position entered!\n");
						}						
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
					tempo=head;
					head=head->next;
					free(tempo);
					printf("\nThe first element is deleted successfully.\n");
				}
				else
				{
					printf("\nThere is no element to delete!\n");
				}
				break;
			
			case 6:
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
					if(c==1)
					{
						tempoo=head;
						head=0;
						free(tempoo);
						printf("\nTthe last remaining element is deleted from the list.\n");
					}
					else
					{
						printf("\nEnter the position from which u want to delete an element.\n");
						scanf("%d",&pos);
						i=1;
						tempnext1=head;
						while(i<pos-1)
						{
							i++;
							tempnext1=tempnext1->next;
						}
						tempnext2=tempnext1->next;
						tempnext1->next=tempnext2->next;
						free(tempnext2);
						printf("\nAn element has been deleted from the list.\n");
					}
					c=0;
					break;				
				}
				else
				{
					printf("The list is empty!\n");
					break;
				}
								
			case 7:
				if(head != 0)
				{
					temp=head;
					while(temp->next != 0)
					{
						prevnode=temp;
						temp=temp->next;
					}
					if(head==temp)
					{
						head=0;
						free(temp);
						printf("\n Last element of the list is deleted.\n");
						break;
					}
					else
					{
						prevnode->next=0;
						tempnode=prevnode;
						free(temp);
						printf("\n Last element of the list is deleted.\n");
						break;
					}
				}
				else
				{
					printf("\nThere is no element to delete!\n");
					break;
				}
								
			case 8:
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

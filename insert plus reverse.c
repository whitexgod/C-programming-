#include <stdio.h>

main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node *newnode,*tempnode,*temp,*head;
	struct node *prevnode,*currentnode,*nextnode;
	head=0;
	int choice=1,input,element,c,temp_input;
	while(choice==1)
	{
		printf("\nPress 1 to create a link list.\n");
		printf("press 2 to display the link list.\n");
		printf("press 3 to reverse print the link list.\n");
		printf("Press 0 to terminate the program!\n");
		scanf("%d",&input);
		
		switch(input)
		{
			case 0:
				choice=0;
				printf("\nTerminating the program.\n");
				break;
				
			case 1:
				if(head != 0)
				{
					printf("\ndo you want to continue adding to the previous list or create a new 1?\n");
					printf("\nPress 4 to create a new one.\n");
					printf("\nPress 5 to continue adding to the previous list.\n");
					scanf("%d",&temp_input);
					
					switch(temp_input)
					{
						case 4:
							head=0;
							free(tempnode);
							c=1;
							while(c==1)
							{
								newnode=(struct node*)malloc(sizeof(struct node));
								printf("\nEnter an element.\n");
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
								printf("\nElement entered successfully.\n");
								printf("\nIf you want to continue press 1 or else press 0.\n");
								scanf("%d",&c);
							}
							break;
							
						case 5:
							
							c=1;
							while(c==1)
							{
								newnode=(struct node*)malloc(sizeof(struct node));
								printf("\nEnter an element.\n");
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
								printf("\nElement entered successfully.\n");
								printf("\nIf you want to continue press 1 or else press 0.\n");
								scanf("%d",&c);
							}
							break;
						
						default:
							printf("\n Wrong Choice.\n");
					}
				}
				else
				{
					c=1;
					while(c==1)
					{
						newnode=(struct node*)malloc(sizeof(struct node));
						printf("\nEnter an element.\n");
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
						printf("\nElement entered successfully.\n");
						printf("\nIf you want to continue press 1 or else press 0.\n");
						scanf("%d",&c);
					}
					break;
				}				
			
			case 2:
				if(head==0)
				{
					printf("\nThe list is empty!\n");
					break;
				}
				else
				{
					temp=head;
					printf("\nThe elements in the link list are as follows:-\n");
					while(temp != 0)
					{
						printf("%d\t",temp->data);
						temp=temp->next;
					}
					break;
				}
				
			case 3:
				prevnode=0;
				tempnode=head;
				currentnode=nextnode=head;
				while(nextnode != 0)
				{
					nextnode=nextnode->next;
					currentnode->next=prevnode;
					prevnode=currentnode;
					currentnode=nextnode;
				}
				head=prevnode;
				printf("\n The link list has been reversed successfully.\n");
				break;
								
			default:
				printf("\n Wrong Choice.\n");		
		}
	}
}

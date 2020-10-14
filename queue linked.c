#include <stdio.h>

main()
{
	int qu[4], front = -1, rear = -1, max = 4, item, check,i;
    int choice=1;
    printf("The queue is initially empty!");
    printf("\nEnter what do you want to perform...\n");
    
    while(choice != 0 )
    {
    	printf("\n Enter 1 to perform insertion operation.\n");
    	printf("\n Enter 2 to perform deletion operation. \n");
    	printf("\n Enter 3 to perform Display operation. \n");
    	printf("\n Enter 0 to terminate the program.\n");
    	scanf("%d",&choice);
    	
    	switch(choice)
    	{
    		case 1:
	        	if (rear == max - 1)
	            {
	                printf("\nThe queue is full.\n");
	            }
	            else
	            {
	                printf("\nEnter the item to be inserted :- ");
	                scanf("%d", &item);
	                if (front == -1)
	                {
	                    front = 0;
	                }
	                rear=rear+1;
	                qu[rear] = item;
	            }
	            break;
	            
	        case 2:
	        	if (front == -1 || front > rear)
	            {
	                printf("\nThe queue is empty.\n");
	            }
	            else
	            {
	                printf("\n%d is deleted from the queue successfully.\n", qu[front]);
	                front=front+1;
	            }
	            break;
	            
	        case 3:
	        	if (front == -1)
	            {
	                printf("\nThe queue is empty.\n");
	            }
	            else
	            {
	                for (i = front; i <= rear; i++)
	                {
	                    printf("%d ",qu[i]);
	                }
	                printf("\n\n");
	            }
	            break;
	            
			case 0:
				printf("\nTerminating the program!\n");
				choice=0;
				break;
				
			default:
				printf("\nworng choice!\n");
		}
    		
	}
    
}

//input restricted dequeue

#include <stdio.h>

main()
{
	int front=-1,rear=-1,i;
	int N=5,dash_counter; // size of the queue
	int array[N];
	int choice=1,input,element;
	
	while(choice == 1)
	{
		printf("\nEnter 1 to enter an element.\n");
		printf("\nEnter 2 to delete an element from rear.\n");
		printf("\nEnter 3 to delete an element from front.\n");
		printf("\nEnter 4 to display the elements.\n");
		printf("\nEnter 0 to terminate the program.\n");
		scanf("%d",&input);
		
		switch(input)
		{
			case 0:
				
				printf("Terminating the program!");
				choice=0;
				break;
			
			case 1:
				if(front==-1 & rear==-1) // queue empty condition
				{
					printf("\nEnter the element you want to insert : ");
					scanf("%d",&element);
					front=0;
					rear=0;
					array[rear]=element;
					printf("\n Element entered SUCCESSFULLY!");
					break;
				}
				else if( (rear+1)%N==front ) // checking the queue for overflow
				{
					printf("\nThe queue is full!\n");
					break;
				}
				else // if there is space in queue perform insertion at rear
				{
					printf("\nEnter the element you want to insert : ");
					scanf("%d",&element);
					rear = (rear+1)%N;
					array[rear]=element;
					printf("\n Element entered SUCCESSFULLY! \n");
					break;
				}
			
			case 2:
				if(front==-1 & rear==-1) // empty condition
				{
					printf("\nThe queue is empty!\n");
					break;
				}
				else if(front==rear) // if only one element is present in the queue
				{
					printf("\n %d is deleted \n",array[rear]);
					front=-1;
					rear=-1;
					break;
				}
				else // perform deletion at rear
				{
					printf("\n %d is deleted \n",array[rear]);
					rear=(rear-1)%N;
					break;
				}
	
			case 3:
				if(front==-1 & rear==-1) // empty condition
				{
					printf("\nThe queue is empty!\n");
					break;
				}
				else if(front==rear) // if only one element is present in the queue
				{
					printf("\n %d is deleted \n",array[front]);
					front=-1;
					rear=-1;
					break;
				}
				else // perform deletion at front
				{
					printf("\n %d is deleted \n",array[front]);
					front=(front+1)%N;
					break;
				}
				
			case 4:
				if(front==-1 & rear==-1) //empty condition
				{
					printf("\n The queue is empty, Nothing to display. \n");
					break;
				}
				else // displaying the elements of the queue
				{
					dash_counter=0;
					printf("\n Displaying the elements of the circular queue :- \n");
					printf("\n The front element is : %d \n",array[front]);
					printf("\n The rear element is : %d \n",array[rear]);
					printf("\n");
					for(i=front;i != rear; i=(i+1)%N)
					{
						printf(" %d ",array[i]);
						dash_counter=dash_counter+1;	
					}
					printf(" %d ",array[rear]);
					for(i=dash_counter+1;i<N;i++)
					{
						printf(" _ ");
					}
					printf("\n");
					break;
				}

			default :
				printf("Wrong choice!");
				break;
		}
	}
}

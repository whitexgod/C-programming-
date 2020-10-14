 //Stack using linked list

#include <stdio.h>



main()

{

	struct node

	{

		int data;

		struct node *next;

	};

	

	struct node *head,*newnode,*tempnode,*temp,*prevnode;

	head=0;

	int choice=1,input;

	printf("\nSTACK USING LINKED LIST");

	while(choice==1)

	{

		printf("\nEnter 1 to push an element in the stack.\n");

		printf("Enter 2 to pop an element from the stack.\n");

		printf("Enter 3 to display the stack.\n");

		printf("Enter 0 to terminate the program.\n");

		scanf("%d",&input);

		

		switch(input)

		{

			case 0:

				printf("\n The program is terminated. \n");

				choice=0;

				break;

			

			case 1:

				newnode=(struct node*)malloc(sizeof(struct node));

				printf("\nEnter an element to push in the stack : ");

				scanf("%d",&newnode->data);

				newnode->next=0;

				if(head==0)

				{

					head=tempnode=newnode;

					printf("\nAction Successful.\n");

				}

				else

				{

					tempnode->next=newnode;

					tempnode=newnode;

					printf("\nAction Successful.\n");

				}

				break;

				

			case 2:

				if(head==0)

				{

					printf("\n The queue is empty!\n");

					break;

				}

				else

				{

					temp=head;

					while(temp->next != 0)

					{

						prevnode=temp;

						temp=temp->next;

					}

					if(head==temp)

					{

						printf("\n %d element of the queue is deleted.\n",temp->data);

						head=0;

						free(temp);

						break;

					}

					else

					{

						printf("\n %d element of the queue is deleted.\n",tempnode->data);

						prevnode->next=0;

						tempnode=prevnode;

						free(temp);

						break;

					}	

				}				

				

			case 3:

				temp=head;

				printf("\nThe elements in the stack are :- \n");

				while(temp !=0 )

				{

					printf("%d\t",temp->data);

					temp=temp->next;

				}

				free(temp);

				break;

			

			default:

				printf("\nSorry Wrong choice!\n");				

		}

		

	}

}

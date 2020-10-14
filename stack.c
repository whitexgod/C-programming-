#include <stdio.h>

main()
{
	int i,array[5],counter=0,input,element;
	int on=1;
	printf("The stack is initially empty!");
	printf("\nEnter what do you want to perform...\n");
	while (on==1)
	{
		printf("\nEnter 1 to perform push operation");
		printf("\nEnter 2 to perform pop operation");
		printf("\nEnter 3 to perform display operation");
		printf("\nEnter 0 to terminate the program!\n");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				
				if(counter<5)
				{
					printf("Enter the element you want to push :");
					scanf("%d",&element);
					array[counter]=element;
					counter=counter+1;
				}
				else
				{
					printf("STACKOVERFLOW \n operation not possible!\n");
				}
				break;
			case 2:
				if(counter>0)
				{
					printf("The last elemnt is poped out now...");
					counter=counter-1;
					printf("Current stack is :\n");
					for(i=0;i<counter;i++)
					{
						printf("%d ",array[i]);
					}
				}
				else
				{
					printf("\nThere is no element to pop out from the stack\n");
				}
				break;
			case 3:
				if(counter>0)
				{
					printf("\n The elements in the stack are : \n ");
					for(i=0;i<counter;i++)
					{
						printf("%d ",array[i]);
					}
				}
				else
				{
					printf("\nThere is no element in the stack!\n");
				}
				break;
			case 0:
				printf("\nTerminating the program now!\n");
				on=0;
				break;
			default:
			printf("\nPlease make a valid choice first...\n");				
		}
	}
}

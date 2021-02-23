#include <stdio.h>

main()
{
	//Initial declarations
	int n,i,j,temp,arr[100],choice,swap;
	
	//taking required inputs
	printf("Enter the nummber of elements to be sorted.\n");
	scanf("%d",&n);
	printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)
    {
    	printf("\nEnter %d number element : ",i+1);
    	scanf("%d", &arr[i]);
	}
	printf("Enter 1 for Intersion Sort and 2 for Bubble sort.\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			//Insertion sort
			printf("\nPerforming Insertion Sort.\n");
			for (i = 1 ; i <= n - 1; i++)
		    {
			    j = i;
		            while ( j > 0 && arr[j-1] > arr[j])
		            {	        
		                temp     = arr[j];
		                arr[j]   = arr[j-1];
		                arr[j-1] = temp;
		                j--;
		            }
		    }
		    break;
		case 2:
			//Bubble sort
			printf("\nPerforming Bubble Sort.\n");
			for (i = 0 ; i < n - 1; i++)
			{
			    for (j = 0 ; j < n - i - 1; j++)
			    {
			      if (arr[j] > arr[j+1]) 
			      {
			        swap       = arr[j];
			        arr[j]   = arr[j+1];
			        arr[j+1] = swap;
			      }
			    }
		  	}
		  	break;
		default:
			printf("\nWrong Choice!\n");	
	}
	
	//Final result after sorting
	printf("Sorted list in ascending order:\n");

	for (i = 0; i < n; i++)
	    printf("%d\t", arr[i]);
}

//Linear search using function 

#include <stdio.h>
int linear_search(int item,int array[],int length)
{
	int i;
	for (i=0;i<length;i++)
	{
		if(array[i]==item)
		{
			return i;
		}
	}
	
	return -1;
}

main()
{
	int item,i,array[20],length,result,c[20],k=0;
	printf("Enter the length of the initial array:\n");
	scanf("%d",&length);
	for (i=0;i<length;i++)
	{
		printf("Enter an element for the array:");
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be searched for in the array:\n");
	scanf("%d",&item);
	printf("The array :\n");
	for(i=0;i<length;i++)
	{
		printf("%d ",array[i]);
	}
	result = linear_search(item,array,length);
	(result == -1) ? printf("\nElement is not present in array") : printf("\nElement is present at index %d considering index position starts from 0", result); 
	
}

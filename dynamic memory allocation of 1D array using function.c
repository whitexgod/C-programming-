#include <stdio.h>

int memo(int n)
{
	int *ptr,i;
	printf("\nAllocating dynamic memory now!\n");
	ptr = (int*)malloc(n*sizeof(int));
	
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
	return ptr;
}

main()
{
	
	int n,i,*array;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	
	array=memo(n);
		
	printf("\nThe 1D array is :- \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(array+i));
	}	
}

#include <stdio.h>

main()
{
	int n,*ptr,i;
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	
	printf("\nAllocating dynamic memory now!\n");
	ptr = (int*)malloc(n*sizeof(int));
	
	printf("\nEnter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	
	printf("\nThe 1D array is :- \n");
	for(i=0;i<n;i++)
	{
		printf("%d ",*(ptr+i));
	}	
}

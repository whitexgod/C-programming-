#include <stdio.h>

main()
{
	int i,arr[100],size;
	
	printf("Enter the size of the array :\n");
	scanf("%d",&size);
	
	printf("Enter the array elements one at a time: \n");
	for(i=0;i<size;i++)
	{
		printf("Enter %d element :\n",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("The original array = \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	
	int start,end,temp=0;
	start=0;
	end=size-1;
	
	while(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
	printf("The reversed array = \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
}

#include<stdio.h>

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
	printf("\n");
	
	int odd[100],even[100];
	int j=0,k=0;
	
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			j++;	
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	
	printf("The elements of odd array are : \n");
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
	printf("\n");
	
	printf("The elements of even array are : \n");
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}
	
}

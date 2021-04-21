#include <stdio.h>
int binary_search(int arr[],int l,int u,int x)
{
	while(l<=u)
	{
		int mid=(l+u)/2;
		if(arr[mid]==x)
			return mid;
		else if(arr[mid]>x)
		{
			u=mid-1;
		}
		else if(arr[mid]<x)
		{
			l=mid+1;
		}
	}
	return -1;
}
main()
{
	int i,n,element;
	printf("Enter the size of the array : \n");
	scanf("%d",&n);
	int array[n];
	printf("Enter a sorted array :- \n");
	for(i=0;i<n;i++)
	{
		printf("Enter %d element : ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\nThe entered array is as follows :- \n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
	printf("\nEnter the element to search for :- ");
	scanf("%d",&element);
	int result=binary_search(array,0,n-1,element);
	if(result==-1)
		printf("\n Element not found.");
	else
		printf("\n Element found at %d position.",result+1);
}

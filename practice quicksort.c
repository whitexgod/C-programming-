#include<stdio.h>
void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[low];
    int start = low;
  	int end = high;
  	while(start<end)
  	{
  		while(arr[start]<=pivot)
	    {
	 		start++;   	
		}
		while(arr[end]>pivot)
		{
			end--;
		}
		if (start<end)
		{
			swap(&arr[start],&arr[end]);
		}
	}
	swap(&arr[low],&arr[end]);
	return end;    
}
void quickSort(int arr[], int low, int high) 
{ 
    if (low < high) 
    { 
        int loc = partition(arr, low, high);  
        quickSort(arr, low, loc-1); 
        quickSort(arr, loc+1, high); 
    } 
} 
int main()
{
	int i,n,array[100];
	
	printf("Enter the length of the array : ");
	scanf("%d",&n);
	
	printf("\nEnter the elements of the array:\n");\
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d position element : ",i+1);
		scanf("%d",&array[i]);
	}
	
	quickSort(array,0,n-1);
	
	printf("\nThe sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
	return 0;
}

//SELECTION SORT
#include<stdio.h>

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
void selectionSort(int array[], int low, int high)
{
	int i,min,pass;
	for(pass=0;pass<high;pass++)
	{
		min=pass;
		for(i=pass+1;i<=high;i++)
		{
			if(array[i]<array[min])
			{
				min=i;
			}
		}
		swap(&array[min],&array[pass]);
	}
}

int main()
{
	int array[100],i,n;
	
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d number element : ");
		scanf("%d",&array[i]);
	}
	
	selectionSort(array,0,n-1);
	
	printf("\nThe sorted array is :\n");
	for(i=0;i<n;i++)
	{
		printf("%d  ",array[i]);
	}
	return 0;
}

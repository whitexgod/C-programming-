//INSERTION SORT

#include<stdio.h>

int main()
{
	int i,j,temp,array[100],n;
	
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element : ");
		scanf("%d",&array[i]);
	}
	
	for(i=1;i<n;i++)
	{
		temp=array[i];
		j=i-1;
		while((j>=0)&&(array[j]>temp))
		{
			array[j+1]=array[j];
			j--;
		}
		array[j+1]=temp;
	}
	
	printf("\nThe sorted array is : \n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
}


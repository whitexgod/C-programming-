//BUBBLE SORT

#include<stdio.h>

void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
int bubbleSort(int array[], int low, int high)
{
	int pass,i,flag;
	for(pass=0;pass<high;pass++)
	{
		flag=0;
		for(i=low;i<high-pass;i++)
		{
			if(array[i]>array[i+1])
			{
				swap(&array[i],&array[i+1]);
				flag=1;
			}				
		}
		if(flag==0)
			break;
	}
}

int main()
{
	int i,j,temp,array[100],n;
	
	printf("Enter the number of elements in the array : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("\nEnter the %d element : ",i+1);
		scanf("%d",&array[i]);
	}
	
	bubbleSort(array,0,n-1);
	
	printf("\nThe sorted array is : \n");
	for(i=0;i<n;i++)
	{
		printf(" %d ",array[i]);
	}
}


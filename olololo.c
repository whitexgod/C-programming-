//Linear search 

#include <stdio.h>

main()
{
	int item,i,array[20],length,k=0,c[20];
	printf("Enter the length of the initial array:\n");
	scanf("%d",&length);
	for (i=0;i<length;i++)
	{
		printf("Enter an element for the array:");
		scanf("%d",&array[i]);
	}
	printf("\nEnter the element to be searched for in the array:\n");
	scanf("%d",&item);
	printf("The entered array :\n");
	for(i=0;i<length;i++)
	{
		printf("%d ",array[i]);
	}
	for (i=0;i<length;i++)
	{
		if(array[i]==item)
		{
			c[k]=i;
			k++;
		}
	}
	if(k==0)
	{
		printf("\nThe searched element is not found!\n");
	}
	else
	{
		printf("\nConsidering index position starts from 0 the required index positions are :\n");
		for(i=0;i<k;i++)
		{
			printf("%d\n",c[i]);
		}
	}
}


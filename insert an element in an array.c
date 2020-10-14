#include <stdio.h>

main()
{
	int item,pos,i, array[20],length;
	printf("Enter the length of the initial array:\n");
	scanf("%d",&length);
	for (i=0;i<length;i++)
	{
		printf("Enter an element for the array:");
		scanf("%d",&array[i]);
		}
	printf("\nEnter a new element to be inserted into the initial array :");
	scanf("%d",&item);
	printf("\nEnter the position where you want to enter the element:");
	scanf("%d",&pos);
	if(pos<=length)
	{
		length=length+1;
		for(i=length-1;i>=pos-1;i--)
		{
			array[i]=array[i-1];
		}
		array[pos-1]=item;
	}
	else
	{
		printf("The entered position is not valid!");
	}
	printf("\nThe array :\n");
	for(i=0;i<length;i++)
	{
		printf("%d",array[i]);
	}
}

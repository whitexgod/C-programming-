#include <stdio.h>

main()
{
	int pos,i, array[20],length;
	printf("Enter the length of the initial array:\n");
	scanf("%d",&length);
	for (i=0;i<length;i++)
	{
		printf("Enter an element for the array:");
		scanf("%d",&array[i]);
		}
	printf("\nEnter the position from where you want to delete the element:");
	scanf("%d",&pos);
	if(pos<=length)
	{
		length=length-1;
		for(i=pos-1;i<length;i++)
		{
			array[i]=array[i+1];
		}
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

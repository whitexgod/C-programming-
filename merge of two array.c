#include <stdio.h>

main()
{
	int i,j=0,k=0,array1[20],array2[20],array3[20],length1,length2,length3;
	printf("PLEASE ENTER SORTED ARRAY'S ONLY");
	printf("\nEnter the length of the first initial array:\n");
	scanf("%d",&length1);
	for (i=0;i<length1;i++)
	{
		printf("Enter an element for the array:");
		scanf("%d",&array1[i]);
		}
	printf("Enter the length of the second initial array:\n");
	scanf("%d",&length2);
	for (i=0;i<length2;i++)
	{
		printf("Enter an element for the array:");
		scanf("%d",&array2[i]);
		}
	length3=length1+length2;
	for(i=0;i<length3;i++)
	{
		if(array1[j]<array2[k])
		{
			array3[i]=array1[j];
			j++;
		}
		else
		{
			array3[i]=array2[k];
			k++;
		}
	}
	printf("\nThe merged array :\n");
	for(i=0;i<length3;i++)
	{
		printf("%d",array3[i]);
	}
}

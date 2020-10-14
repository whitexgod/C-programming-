#include <stdio.h>

main()
{
	int arr[100],i,size,sum_even=0,sum_odd=0;
	printf("Enter the size of the array : \n");
	scanf("%d",&size);
	
	for(i=0; i<size; i++)
	{
		printf("Enter %d element of the array\n ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0; i<size; i++)
	{
		if(arr[i]%2==0)
		{
			sum_even = sum_even + arr[i];
		}
		else
		{
			sum_odd = sum_odd + arr[i];
		}
	}
	
	printf("The sumation of all the even elements of the array = %d\n",sum_even);
	printf("The sumation of all the odd elements of the array = %d\n",sum_odd);	
	
}

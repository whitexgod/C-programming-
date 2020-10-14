#include<stdio.h>
int memo(int c,int r)
{
	int i,j;
	
	printf("\nAllocating dynamic memory!");
	int *arr = (int *)malloc(r * c * sizeof(int));
	
	printf("\nEnter the 2D array :- \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter row %d and column %d element : ",i,j);
			scanf("%d",(arr + i*c + j));
		}
	}
	
	return arr;
}

main()
{
	
	int i,j,r,c,*array;
	
	printf("Enter the number of rows : ");
	scanf("%d",&r);
	printf("\nEnter the number of columns : ");
	scanf("%d",&c);
	
	array=memo(c,r);
		
	printf("\nThe 2D array is :- \n");
	for (i = 0; i <  r; i++)
    {
    	for (j = 0; j < c; j++)
    	{
    		printf("%d\t", *(array + i*c + j));	
		}
        printf("\n");
	}
	
}

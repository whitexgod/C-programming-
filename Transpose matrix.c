#include<stdio.h>

main()
{
	int i,j,matrix[100][100],r,c;
	
	printf("Enter the number of rows : \n");
	scanf("%d",&r);
	printf("Enter the number of columns : \n");
	scanf("%d",&c);
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter an element for the matrix : \n");
			scanf("%d",&matrix[i][j]);
		}
	}
	
	printf("The original matrix = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	
	printf("The Transpose matrix = \n");
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",matrix[j][i]);
		}
		printf("\n");
	}
	
	
}

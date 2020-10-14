#include <stdio.h>

main()
{
	int i,j,mat1[100][100],mat2[100][100],row,col;
	int sum[1000][1000];
	
	printf("Enter the no. of rows for the matrices:\n");
	scanf("%d",&row);
	printf("Enter the no. of columns for the matrices:\n");
	scanf("%d",&col);
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter element of the 1st matrix :\n");
			scanf("%d",&mat1[i][j]);
		}
	}
	
	for(i=0; i<row; i++)
	{
		for(j=0; j<col; j++)
		{
			printf("Enter element of the 2nd matrix :\n");
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}

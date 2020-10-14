#include <stdio.h>

main()
{
	int matrix[100][100],i,j,r,c,result=1,n;
 	printf("Please make sure that the entered matrix is a square matrix\n Because a main diagonal is only present if it is a square matrix.\n");
	printf("Enter the number of rows :\n");
	scanf("%d",&r);
	printf("Enter the number of columns :\n");
	scanf("%d",&c);
	 
	for(i=1;i<=r;i++)
	for(j=1;j<=c;j++)
	{
		printf("Enter an Element : \n");
		scanf("%d",&matrix[i][j]);
	}
	
	for(i=1;i<r;i++)
	for(j=i+1;j<=c;j++)
	{
		n=matrix[i][j];
		result=result*n;
	}
	printf("The resultant = %d", result);
}

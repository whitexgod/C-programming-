#include<stdio.h>

main()
{
	int matrix[100][100],i,j,r,c,sum=0;
	
	printf("Enter the number of rows :\n");
	scanf("%d",&r);
	printf("Enter the number of columns :\n");
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
		{
			printf("Enter an Element : \n");
			scanf("%d",&matrix[i][j]);
		}
		
	for(i=0;i<=r-1;i++)
		{
			sum=sum+matrix[i][i];
		}
		
	
		
	printf("The sum of the main diagonal elements = %d",sum);
}

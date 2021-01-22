#include <stdio.h>


int main()
{
	int r,c,i,j;
	printf("Enter the number of rows : \n");
	scanf("%d",&r);
	printf("\nEnter the number of columns : \n");
	scanf("%d",&c);
	int array[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\nEnter element %d %d : ", i,j);
			scanf("%d",&array[i][j]);
		}
	}
	void display()
	{
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf(" %d ",array[i][j]);
			}
			printf("\n");
		}	
	}
	printf("\nThe entered matrix is : \n");
	display();
	printf("\n");
	
	int m=r,n=c;
	int k = 0, l = 0;
 
    /*  k - starting row index
        m - ending row index
        l - starting column index
        n - ending column index
        i - iterator
    */
 
    while (k < m && l < n) 
	{
        /* Print the first row from the remaining rows */
        for (i = l; i < n; ++i) {
            printf("%d ", array[k][i]);
        }
        k++;
 
        /* Print the last column from the remaining columns
         */
        for (i = k; i < m; ++i) {
            printf("%d ", array[i][n - 1]);
        }
        n--;
 
        /* Print the last row from the remaining rows */
        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                printf("%d ", array[m - 1][i]);
            }
            m--;
        }
 
        /* Print the first column from the remaining columns
         */
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                printf("%d ", array[i][l]);
            }
            l++;
        }
    }
    return 0;
}

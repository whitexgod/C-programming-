/**   1
	  22
	  333
	  4444
	  55555
*/


#include<stdio.h>
main()
{
	int i,j,r;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
			{
				printf("%d",i);
		    }
	printf("\n");
	}
}

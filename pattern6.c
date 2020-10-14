/**   1
	  12
	  123
	  1234
	  12345
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
				printf("%d",j);
		    }
	printf("\n");
	}
}

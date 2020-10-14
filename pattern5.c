/**   1
	  01
	  101
	  0101
	  10101
*/


#include<stdio.h>
main()
{
	int i,j,r,v;
	printf("Enter the number of rows:\n");
	scanf("%d",&r);
	v=1;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=i;j++)
			{
				printf("%d",v);
				if(v==1)
					v=0;
				else
					v=1;
			}
	printf("\n");
	}
}

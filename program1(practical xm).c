#include <stdio.h>
#include <math.h>
int power(int x, int y) 
{ 
    if (y == 0) 
        return 1; 
    else
    {
    	int i,result=1;
    	for (i=1;i<=y;i++)
    	{
    		result=result*x;
		}
		return result;
	}
} 
int power(int,int);
main()
{
	int i,x,n;
	int sum=0;
	printf("Enter the value of x :\n");
	scanf("%d",&x);
	printf("Enter the range :\n");
	scanf("%d",&n);
	for (i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			sum=sum+power(x,i);
		}
		else
		{
			sum=sum-power(x,i);
		}
	}
	printf("The result of the series is : %d",sum);
}

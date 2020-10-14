#include<stdio.h>

int gcd(int a,int b)
{
	while (a!=b)
	{
		if(a>b)
		{
			return gcd(a-b,b);
		}
		else
		{
			return gcd(a,b-a);
		}
	}
	return a;
}

main()
{
	int a,b,result;
	printf("Enter the two numbers to find their gcd\n");
	scanf("%d%d",&a,&b);
	
	int gcd(int,int);
	
	result=gcd(a,b);
	
	printf("The gcd of the two numbers is \n %d ", result );
	
}

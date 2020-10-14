#include<stdio.h>
main()
{
	int n,n2,r,sum=0;
	printf("Enter a number :\n ");
	scanf("%d",&n);
	n2=n;
	while(n!=0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(sum==n2)
		printf("It is an armstrong number");
	else
		printf("it is not an armstrong number");
}

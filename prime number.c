#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter a number :\n ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		c=c+1;
	}
	if(c==2)
		printf("It is an Prime number");
	else
		printf("it is not an Prime number");
}

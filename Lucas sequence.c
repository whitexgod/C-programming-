#include<stdio.h>

int LS(int n)
{
	int i,a=2,b=1,c=0;
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		a=b;
		b=c;
		printf("%d\n",c);
	}
}
main()
{
	int n,a=2,b=1;
	printf("Enter the n terms of a Lucs Sequence : ");
	scanf("%d",&n);
	if (n==1)
		printf("%d\n",a);
	else if (n==2)
	{
		printf("%d\n",a);
		printf("%d\n",b);
	}		
	else
	{
		int LS(int);
		printf("%d\n",a);
		printf("%d\n",b);
		printf(LS(n));
	}
}

#include<stdio.h>
int check(int n)
{
	if (n%2==0)
		return n/2;
	else
		return n*3+1;
}
main()
{
	int n,temp=0;
	printf("Enter the number : ");
	scanf("%d",&n);
	int check(int);
	printf("%d  ",n);
	while(n!=1)
	{
		n=check(n);
		printf("%d  ",n);
	}
}

#include<stdio.h>
int fact(int n)
{
	int f=1,i;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}
int fact(int);
main()
{
	
	int n,f;
	printf("Enter a number :\n ");
	scanf("%d",&n);
	f=fact(n);
	printf("The factorial of the given number = %d",f);

}

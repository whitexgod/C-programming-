#include<stdio.h>
#include<math.h>
main()
{
	int n,x,k;
	printf("Enter the value of x : ");
	scanf("%d",&x);
	printf("Enter the value of n : ");
	scanf("%d",&n);
	k=pow(x,n);
	printf("The result = %d",k);
}

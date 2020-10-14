#include<stdio.h>

int fact(int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	{
		result=result*i;
	}
	return result;
}

int main()
{
	int a,result;
	printf("Enter a number \n");
	scanf("%d",&a);
	
	int fact(int);
	
	result=fact(a);
	
	printf("The factorial result of %d = %d ",a,result);
	
	return 0;
}

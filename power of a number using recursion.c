#include<stdio.h>
#include<math.h>
int power(int base,int exp)
{
	return(pow(base,exp));
}

main()
{
	int a,b,result;
	
	printf("Program will find y=x^n \n");
	
	printf("Enter the base that is x : \n");
	scanf("%d",&a);
	printf("Enter the power that is n : \n");
	scanf("%d",&b);
	
	int power(int,int);
	
	result=power(a,b);
	
	printf("The result = \n %d ", result );
	
}

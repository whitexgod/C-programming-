#include<stdio.h>
main()
{
	int a,b,temp;
	printf("Enter the value of first number = \n");
	scanf("%d", &a);
	printf("Enter the value of second number = \n");
	scanf("%d", &b);
	temp=a;
	a=b;
	b=temp;
	printf("On swapping, \n the first number = %d \n The second number = %d", a,b);
}

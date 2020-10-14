#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g;
	printf("Enter first number =\n");
	scanf("%d", &a);
	printf("Enter second number =\n");
	scanf("%d", &b);
	c=a>>2;
	d=a<<2;
	e=~a;
	f=a|b;
	g=a&b;
	printf("The equialent resuts are = %d \t %d \t %d \t %d \t %d",c,d,e,f,g);
	
}

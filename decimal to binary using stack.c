#include <stdio.h>

main()
{
	//initial declarations
	int n;
	int array[100];
	int i=0;
	
	//taking input
	printf("Enter the decimal number : \n");
	scanf("%d",&n);
	
	//storing into an stack
	while(n>0)
	{
		array[i]=n%2;
		n=n/2; 
		i++;
	}
	int length=i-1;
	
	//printing the binary number using stack operation
	printf("\nThe binary number of the given decimal number is : \n");
	while(length>-1)
	{
		printf("%d",array[length]);
		length--;
	}
}

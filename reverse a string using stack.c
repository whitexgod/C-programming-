#include <stdio.h>

main()
{
	//initializations
	char str[100];
	char array[100];
	char reverse[100];
	char *sptr=str;
	char *rptr=reverse;
	int i=0;
	
	//taking required input
	printf("Enter a string : \n");
	gets(str);

	//storing each character of the string in a array [push] operation
	while(*sptr)
	{
		array[i]=*sptr;
		sptr++;
		i++;
	}
	int length=i-1;
	
	//pop operation
	while(length>=0)
	{
		*rptr=array[length];
		rptr++;
		length--;
	}
	*rptr='\0';
	rptr=reverse;
	
	//printing the array
	printf("\nThe reversed string is : %s \n",reverse);

}

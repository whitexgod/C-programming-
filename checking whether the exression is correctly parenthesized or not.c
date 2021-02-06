#include <stdio.h>

main()
{
	//initial declarations 
	char str[100];
	char *sptr = str;
	int flag=0;
		
	//taking the expression from the user
	printf("Enter the expression : \n");
	gets(str);

	//checking the expression
	while(*sptr)
	{
		if(*sptr=='(')
		{
			flag++;
		}
		else if(*sptr==')')
		{
			flag--;
		}
		sptr++;
	}
	
	//final result
	if(flag>0)
	{
		printf("\n The expression is not correctly parenthesized!\n");
	}
	else
	{
		printf("\n The expression is correctly parenthesized.\n");
	}
}

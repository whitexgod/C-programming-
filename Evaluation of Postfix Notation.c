#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

main()
{
	char str[20];int size; char *p;int i;int stack_counter=-1;int result;
	printf("\nEnter the postfix Notation : \n");
	gets(str);
	size=strlen(str)-1;
	char array[size];
	int stack[size];
	p=str;
	i=0;
	while(p[i] != '\0')
	{
		array[i]=p[i];
		i++;
	}
	for(i=0;i<=size;i++)
	{
		if(isdigit(array[i]))
		{
			stack_counter++;
			int temp=array[i]-'0';
			stack[stack_counter]=temp;
			printf("\n Pusing %d in stack at %d position \n",temp,stack_counter);
		}
		else
		{
			int A=stack[stack_counter];
			stack_counter--;
			int B=stack[stack_counter];
			stack_counter--;
			printf("\nThe value of A is %d ",A);
			printf("\nThe value of B is %d ",B);
			if (array[i]=='+')
			{
				result=B+A;
				stack_counter++;
				stack[stack_counter]=result;
				printf("\nThe sum of B and A is %d ",result);
				printf("\nPusing %d back to stack.",result);
			}
			else if (array[i]=='-')
			{
				result=B-A;
				stack_counter++;
				stack[stack_counter]=result;
				printf("\nThe dif of B and A is %d ",result);
				printf("\nPusing %d back to stack.",result);
			}
			else if (array[i]=='*')
			{
				result=B*A;
				stack_counter++;
				stack[stack_counter]=result;
				printf("\nThe product of B and A is %d ",result);
				printf("\nPusing %d back to stack.",result);
			}
			else if (array[i]=='/')
			{
				result=B/A;
				stack_counter++;
				stack[stack_counter]=result;
				printf("\nThe div of B and A is %d ",result);
				printf("\nPusing %d back to stack.",result);
			}
		}
	}
	printf("\n The result = %d\n",stack[stack_counter]);
}

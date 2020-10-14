#include<stdio.h>

main()
{
	char str[100],rev[100];
	char *sptr=str;
	char *rptr=rev;
	
	int i=-1;
	
	printf("Enter a string :\n");
	gets(str);
	
	
	while(*sptr)
	{
		sptr++;
		i++;
	}
	
	while(i>=0)
	{
		sptr--;
		*rptr = *sptr;
		rptr++;
		i--;
	}
	
	*rptr = '\0';
	rptr = rev;
	
	printf("\n The reverse string is : %s",rev);
}

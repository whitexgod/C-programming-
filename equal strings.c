#include <stdio.h>
#include<string.h>

main()
{
	int i,k=0;
	char str1[100],str2[100];
	
	printf("Enter the first string : \n");
	gets(str1);
	printf("Enter the second string : \n");
	gets(str2);
	
	int str1_len,str2_len;
	
	str1_len = strlen(str1);
	str2_len = strlen(str2);
	
	if(str1_len != str2_len)
	{
		printf("Strings are not equal. \n");
	}
	else
	{
		for( i=0; str1[i]!='\0';i++)
		{
			if( str1[i]==str2[i])
			{
				k++;
			}
		}
		if((k==str1_len) && (k==str2_len))
		{
			printf("The strings are equal\n");
		}
		else
		{
			printf("The strings are not equal\n");
		}
	}
		
}

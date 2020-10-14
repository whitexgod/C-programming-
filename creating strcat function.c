#include<stdio.h>
#include<string.h>
main ()
{
	int i,k,j;
	char str1[100],str2[100],str[1000];
	printf("Enter 1st string :\n");
	gets(str1);
	printf("Enter 2nd string :\n");
	gets(str2);
	
	for ( i=0; str1[i]!='\0';i++)
	{
		str[i]=str1[i];
	}
	str[i]=' ';
	i++;
	j=i;
	k=0;
	while( str2[k]!= '\0')
	{
		str[j]=str2[k];
		j++;
		k++;
	}
	
	puts(str);

}

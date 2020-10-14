#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,j;
	printf("Enter a string : \n ");
	gets(str);
	j=-1;
	for (i=0; str[i]!='\0'; i++)
	{
		j++;
	}
	i=0;
	while (j > i) 
    { 
        if (str[i++] != str[j--]) 
        { 
            printf("%s is Not Palindrome", str); 
            return; 
        } 
    } 
  	printf("%s is palindrome", str); 
}
	

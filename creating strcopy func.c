#include<stdio.h>
#include<string.h>
main()
{
   char str[100];
   char nw[100];
        int i=0;
        printf("Enter a string : \n");
        gets(str);
        while( str[i]!='\0')
        {
        	nw[i]=str[i];
        	i++;
		}
	puts(nw);

}


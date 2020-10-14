#include<stdio.h>
void main()
{
     char str[100];
     int f[26],i;
		
     printf("Enter a string : ");
     gets(str);
// creating a list of all alphabets and giving them an initial count 0
    for(i=0;i<26;i++)
    {
        f[i] = 0;
    }
    i=0;
// calculating the frequency using ASCII value 
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {   f[str[i] - 97]++;  }
        else
        { if(str[i]>='A' && str[i]<='Z')
          {  f[str[i] - 65]++;  }
        }
        i++;
    }
// printing the result
    for (i=0;i<26;i++)
    {
        if(f[i] != 0)
        {
            printf(" '%c' counts %d times.\n", (i + 97), f[i]);
        }
    }
}


#include<stdio.h>

main()

{

     int a,b;

     printf("Enter the first numbers =\n ");

     scanf("%d", &a);

     printf("Enter the second numbers =\n ");

     scanf("%d", &b);

     a=a+b;

     b=a-b;

     a=a-b;

     printf ("On swapping , the first number = %d \t the second number = %d",a,b);

}

#include <stdio.h>

int ack(int m, int n) 
{ 
    if (m == 0){ 
        return n+1; 
    } 
    else if((m > 0) && (n == 0)){ 
        return ack(m-1, 1); 
    } 
    else if((m > 0) && (n > 0)){ 
        return ack(m-1, ack(m, n-1)); 
    } 
} 
int ack(int,int); 
int main()
{ 
    int A,a,b; 
    printf("Enter 1st value for Ackermann function:\n");
    scanf("%d",&a);
    printf("Enter the 2nd value for Ackermann function:\n");
    scanf("%d",&b);
    A = ack(a, b); 
    printf("The resultant value = %d", A); 
    return 0; 
} 
  

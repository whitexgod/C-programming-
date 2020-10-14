#include<stdio.h>
#include<math.h>

int FMN(int n) 
    { 
        int i,count = 0, ans = 1; 
        while (n % 2 == 0) 
        { 
            count++; 
            n /= 2; 
        } 
      
        if (count % 2 == 1) 
            ans *= 2; 
      
        for (i = 3; i <= sqrt(n);i += 2) 
        { 
            count = 0; 
            while (n % i == 0) 
            { 
                count++; 
                n /= i; 
            } 
      
            if (count % 2 == 1) 
                ans *= i; 
        } 
      
        if (n > 2) 
            ans *= n; 
      
        return ans; 
    } 
  
main()
{
	int n,result=0;
	printf("Enter a number : ");
	scanf("%d",&n);
	int FMN(int);
	result = FMN(n);
	printf("\nThe minimum number which can be devided to make it a perfect square is : %d",result);
}

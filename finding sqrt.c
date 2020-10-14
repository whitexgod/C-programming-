#include<stdio.h>
int sqrtsearch(int low, int high, int N)
   
 {     
        if (low <= high)
  {   
            int mid = (int)(low + high) / 2;
     
            if ((mid * mid <= N) && ((mid + 1) * (mid + 1) > N))
   {
                return mid;
            } 
            else if (mid * mid < N)
   {
                return sqrtsearch(mid + 1, high, N);
            }
            else
   {
                return sqrtsearch(low, mid - 1, N);
            }
        }
        return low;
    }
     
main()
{
 int n,result=0;
 printf("Enter a positive number : ");
 scanf("%d",&n);
 int sqrtsearch(int,int,int);
 result=sqrtsearch(0,n,n);
 printf("The floor square root = %d",result);
}
Share

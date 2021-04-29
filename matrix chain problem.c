#include<stdio.h>
int m[10][10];
int s[10][10];

void optimal_paren(int i, int j)
{
	if(i==j)
		printf("A%d",i);
	else
	{
		printf("(");
		optimal_paren(i,s[i][j]);
		optimal_paren(s[i][j]+1,j);
		printf(")");
	}
}

void matrix_chain_multiplication(int p[], int n)
{
	int i,L,j,k,q;
    for(i=1;i<n;i++)
        m[i][i]=0;
    for(L=2;L<n;L++)
    {
        for(i=1;i<n-L+1;i++)
        {
            j=i+L-1;
            m[i][j]= 99999;
            for(k=i;k<=j-1;k++)
            {
                q=m[i][k]+m[k+1][j]+p[i-1]*p[k]*p[j];
                if(q<m[i][j])
                {
                    m[i][j]=q;
                    s[i][j]=k;
                }
            }
        }
    }
 	printf("\nNumber of Multiplication = %d",  m[1][n-1]);
    printf("\nOptimal Parenthesization is : ");
    optimal_paren(1,n-1);  
}

int main()
{
	int n,i;
	int p[10];
	printf("Enter the number of matrices: ");
	scanf("%d",&n);
	printf("Enter the dimension array:\n");
	for(i=0;i<=n;i++)
		scanf("%d",&p[i]);
    
    matrix_chain_multiplication(p, n+1);
    return 0;
}

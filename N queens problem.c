#include <stdio.h>

int arr[50][50], n;
void print_array() 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j]==1)
            {
                printf(" Q ");
            }
            else
            {
                printf(" _ ");
            }
        }
        printf("\n");
    }
    printf("\n__________________________\n");
}
int is_safe(int row, int col)
{
    for (int r = 0; r < n; r++)
    {
        if (arr[r][col] == 1)
        {
            return 0;
        }
    }
    int r = row;
    int c = col;
    while (r >= 0 && c >= 0)
    {
        if (arr[r--][c--] == 1)
        {
            return 0;
        }
    }
    r = row;
    c = col;
    while (r >= 0 && c <= n)
    {
        if (arr[r--][c++] == 1)
        {
            return 0;
        }
    }
    return 1;
}
int n_queen(int x)
{
    int col;
    if (x == n)
    {
        print_array();
        return 1;
    }
    for (col = 0; col < n; col++)
    {
        if (is_safe(x, col))
        {
            arr[x][col] = 1;

            n_queen(x + 1);
                
            arr[x][col] = 0;
        }
    }
    return 0;
}
void main()
{
    printf("\nEnter the value of n : ");
    scanf("%d", &n);
    arr[0][0] = 0;
    if (n<4)
    {
        printf("\nNo solution!!\n\n");
    }
    else
    {
        printf("\nHere are ALL the soultions for %d X %d ChessBoard\n\n___________________________\n",n,n);
        n_queen(0);
    }
}

#include <stdio.h>

struct element_block
{
    int profit, weight;
    float profit_ratio, x;
} k[10], temp;

int n, bag_size;
float cost;

void sort()
{
    int swaped = 0;int i,j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (k[j].profit_ratio < k[j + 1].profit_ratio)
            {
                temp = k[j];
                k[j] = k[j + 1];
                k[j + 1] = temp;
                swaped = 1;
            }
        }
        if (swaped)
        {
            swaped = 0;
        }
        else
        {
            break;
        }
    }
}

void knapsack()
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (k[i].weight > bag_size)
        {
            break;
        }
        k[i].x = 1;
        bag_size -= k[i].weight;
        cost += k[i].profit;
    }
    if (i < n)
    {
        k[i].x = (float)bag_size / k[i].weight;
        cost += k[i].x * k[i].profit;
    }
}

int main()
{
    printf("\nEnter the size of the knapsack : ");
    scanf("%d", &bag_size);
    printf("Enter the number of elements : ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nProfit and weight of element %d \n", i + 1);
        scanf("%d %d", &k[i].profit, &k[i].weight);
        k[i].x = 0;
        k[i].profit_ratio = (float)k[i].profit / k[i].weight;
    }
    sort();
    knapsack();
    printf("\n\nThe solution vector :-\n");
    for (i = 0; i < n; i++)
    {
        printf("%0.2f  ", k[i].x);
    }
    printf("\nTotal cost :- %0.2f\n\n", cost);

    return 0;
}

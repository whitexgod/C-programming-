#include <stdio.h>
int array[10], n;
void marge(int l, int mid, int u)
{
    int i, h, j,k;
    int tmp_arr[n];
    i = h = l;
    j = mid + 1;

    while ((i <= mid) && (j <= u))
    {
        if (array[i] < array[j])
        {
            tmp_arr[h++] = array[i++];
        }
        else
        {
            tmp_arr[h++] = array[j++];
        }
    }
    if (i > mid)
    {
        for (k = j; k <= u; k++)
        {
            tmp_arr[h++] = array[k];
        }
    }
    else
    {
        for (k = i; k <= mid; k++)
        {
            tmp_arr[h++] = array[k];
        }
    }
    for (k = 0; k <= u; k++)
    {
        array[k] = tmp_arr[k];
    }
}

void marge_sort(int l, int u)
{
    if (l < u)
    {
        int mid = (l + u) / 2;
        marge_sort(l, mid);
        marge_sort(mid + 1, u);
        marge(l, mid, u);
    }
}

void print_array()
{ 
	int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n\n");
}

void main()
{
	int i;
    printf("\nEnter the size of the array (Maximum 10 elements) : ");
    scanf("%d", &n);
    printf("\nEnter the array elements :- \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    marge_sort(0, n - 1);
    printf("\nAfter sorting \n");
    print_array();
}

#include <stdio.h>
int partition(int A[], int p, int r)
{
	int j;
    int x = A[r], i = p - 1, temp;
    for (j = p; j < r; j++)
    {
        if (A[j] <= x)
        {
            i = i + 1;
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    temp = A[i + 1];
    A[i + 1] = A[r];
    A[r] = temp;
    return (i + 1);
}
void quicksort(int A[], int p, int r)
{
    if (p < r)
    {
        int q = partition(A, p, r);
        quicksort(A, p, q - 1);
        quicksort(A, q + 1, r);
    }
}
int partition(int A[], int p, int r);
void quicksort(int A[], int p, int r);
main()
{
	int i,n;
	printf("\nEnter the length of the array : \n");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d array element : ",i+1);
		scanf("%d",&array[i]);
	}
	printf("\n User entered array before sorting : \n");
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);
	quicksort(array, 0, n-1);
	printf("\n User entered array after sorting : \n");
	for(i=0;i<n;i++)
		printf("%d  ",array[i]);	
}


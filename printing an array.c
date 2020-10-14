#include<stdio.h>
int main(){

	int Length  =0;
	int i;
	int arr[] = {2,4,6,8,9,4,10,5};

	Length  = sizeof(arr)/sizeof(int);
	printf("The array is :\n");
	for(i=0;i<Length;i++)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}


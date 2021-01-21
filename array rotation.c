#include <stdio.h>

main()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int array[n];
	int i;
	for(i=0; i<n; i++)
     {
          printf("Enter element %d: ",i+1);
          scanf("%d", &array[i]);
     }
     printf("\nThe entered array is :- \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	int pos;
	printf("\nEnter the position of rotation : ");
	scanf("%d",&pos);
	printf("\nRotating the array...\n");
	for(i=pos;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	for(i=0;i<pos;i++)
	{
		printf("%d\t",array[i]);
	}	
}

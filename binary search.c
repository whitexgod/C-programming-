 #include <stdio.h>

int binary_search(int array[],int lb,int ub,int item)

{

int mid=(lb+ub)/2;

if (array[mid]==item)

{

return mid;

}

else

{

if (array[mid]>item)

{

ub=mid-1;

return binary_search(array,lb,ub,item);

}

else

{

lb=mid+1;

return binary_search(array,lb,ub,item);

}

}
}

main()

{

int i,array[20],length,item,result;

printf("Enter a sorted array only.\n");

printf("Enter the length of the array:\n");

scanf("%d",&length);

for(i=0;i<length;i++)

{

printf("Enter %d element of the array",i+1);

scanf("%d",&array[i]);

}

printf("Enter the element to be searched for in the given array : ");

scanf("%d",&item);

int lb=0;

int ub=length-1;

printf("The entered array :\n");

for(i=0;i<length;i++)

{

printf("%d ",array[i]);

}

result = binary_search(array,lb,ub,item);

if(result == -1 )
	printf("\nSearched element not found!\n");
else
	printf("\nThe index position is : %d considering the indexing starts from 0\n",result);	
}

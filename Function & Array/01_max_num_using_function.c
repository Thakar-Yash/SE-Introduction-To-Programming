// 1. Write a program to find out the max number from given array using function
#include<stdio.h>

int max_num(int arr[], int size)
{
	int max = arr[0];
	int i;
	
	for(i=1; i<size; i++)
	{
		if(arr[i]>max)
			max = arr[i];
	}
	return max;
}

main()
{
	int n, i;
	int max;
	printf("\t Enter Number of Element in Array : ");
	scanf("%d",&n);
	
	int arr[n];
	printf("\n\t Enter %d elements of the Array : \n\t",n);
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	
	max = max_num(arr, n);
	
	printf("\t The maximum number in the Array is : %d", max);
	
}


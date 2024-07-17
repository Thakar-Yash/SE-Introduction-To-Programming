// 5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice

#include<stdio.h>

void swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

void Ascending(int arr[], int n)
{
	int i, j; 
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void Descending(int arr[], int n)
{
	int i, j;
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(arr[j]<arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}

void Array(int arr[], int n)
{
	int i;
	printf("\n\t Sorted Array : ");
	for(i=0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

main()
{
	int size1, size2, i;
	
	printf("\t Enter the size of First Array : ");
	scanf("%d",&size1);
	
	int arr1[size1];
	
	printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
	
	printf("\t Enter the size of Second Array : ");
	scanf("%d",&size2);
	
	int arr2[size2];
	
	printf("Enter elements of Second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int choice;
    printf("Enter 1 to sort in ascending order or 2 to sort in descending order: ");
    scanf("%d", &choice);
    
     if(choice == 1) {
        Ascending(arr1, size1);
        Ascending(arr2, size2);
    } else if(choice == 2) {
        Descending(arr1, size1);
        Descending(arr2, size2);
    } else {
        printf("\tInvalid Choice.....");
    }
    	
    Array(arr1, size1);
    Array(arr2, size2);
}

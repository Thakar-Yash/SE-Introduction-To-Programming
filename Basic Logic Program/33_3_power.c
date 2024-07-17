// 33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
main()
{
	int N, N1, N2, N3;
	
	printf("\t Enter Value of N : ");
	scanf("%d",&N);
	
	N1 = N; // N^1
	N2 = N * N; // N^2
	N3 = N * N * N; // N^3
	
	printf("\n\t Value of N1 is : %d",N1);
	printf("\n\t Value of N2 is : %d",N2);
	printf("\n\t Value of N3 is : %d",N3);
}

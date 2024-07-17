// 23.WAP to calculate swap 2 numbers with using of multiplication and division. 
#include<stdio.h>
main()
{
	double A, B;
	
	printf("\t Enter Value of A : ");
	scanf("%lf",&A);
	printf("\n\t Enter Value of B : ");
	scanf("%lf",&B);
	
	printf("\n\t Before Swapping : A = %.2lf & B = %.2lf",A,B);
	
	A = A * B;
	B = A / B;
	A = A / B;
	
	printf("\n\t After Swapping : A = %.2lf & B = %.2lf",A,B);
	
	return 0;	
}


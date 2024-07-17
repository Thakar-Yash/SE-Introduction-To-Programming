/* 21.Accept 2 numbers from user and swap 2 numbers with using 3rd variable
and without using 3rd variable */

/* #include<stdio.h>
main(){
	int A, B, C;
	
	printf("\tEnter Value of A : ");
	scanf("%d",&A);
	printf("\n\tEnter Value of B : ");
	scanf("%d",&B);
	
	printf("\n\t Before Swipe : %d and %d",A, B);
	
	C = A;
	A = B;
	B = C;
	
	printf("\n\t After Swipe : %d and %d",A, B);
	
} */

#include<stdio.h>
main()
{
	int A, B;
	
	printf("\t Enter value of A : ");
	scanf("%d",&A);
	printf("\n\t Enter value of B : ");
	scanf("%d",&B);
	
	printf("\n\t Before Swiping : A = %d & B = %d",A,B);
	
	A = A + B;
	B = A - B;
	A = A - B;
	
	printf("\n\t After Swiping : A = %d & B = %d",A,B);
	
}

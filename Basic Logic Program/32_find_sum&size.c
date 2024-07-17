// 32. Accept 2 numbers and find out its sum check it size
#include<stdio.h>
main()
{
	int A, B, sum;
	
	printf("\t Enter value of A : ");
	scanf("%d",&A);
	printf("\t Enter value of B : ");
	scanf("%d",&B);
	
	sum = A + B;
	printf("\n\t %d + %d = %d & size is %c",A,B,sum,sum);
}

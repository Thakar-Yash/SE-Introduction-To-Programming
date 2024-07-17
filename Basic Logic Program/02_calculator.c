/* W.A.P to make simple calculator (to make addition, substraction, multiplication,
 division, and Modulo */
 
#include <stdio.h>
main(){
	int a, b, add, sub, mul, div, mod;
	a = 50;
	b = 5;
	add = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	
	printf("\t Additon is :%d",add);
	printf("\n\t Substration is :%d",sub);
	printf("\n\t multiplication is :%d",mul);
	printf("\n\t Division is :%d",div);
	printf("\n\t Modulo is :%d",mod);
}

// W.A.P to find Area and Circumference of Circle.
// Area of circle = pi*r*r
// circumference of circle = 2*pi*r

#include<stdio.h>
main(){
	float pi = 3.14, AC, CC;
	int r = 15;
	AC = pi*r*r;
	CC = 2*pi*r;
	
	printf("\t Area of Circle is :%.2f",AC);
	printf("\n\t Circumference of Circle is :%.2f",CC);
}


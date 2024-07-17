//15.Convert school’s name in abbreviated form

#include<stdio.h>
main(){
	char s1[15] = "S N Vidhyalaya";
	char s2[15] = "Shree C U Shah";
	char s3[15] = "Gujrat School";
	char s4[15] = "Sardar Patel";
	
	printf("\n\t Abbrevited form is : %c.%c.%c",s1[0],s1[2],s1[4]);
	printf("\n\t Abbrevited form is : %c.%c.%c",s2[6],s2[8],s2[10]);
	printf("\n\t Abbrevited form is : %c.%c",s3[0],s3[7]);
	printf("\n\t Abbrevited form is : %c.%c",s4[0],s4[7]);
}

//16.Convert country’s name in abbreviate form

#include<stdio.h>
main(){
	char c1[15] = "United Kingdom";
	char c2[25] = "United State Of America";
	char c3[25] = "United Arab Emirates";
	char c4[15] = "INDIA";
	char c5[15] = "South Africa";
	
	printf("\n\t United Kingdom : abbreviate is : %c.%c",c1[0],c1[7]);
	printf("\n\t United State Of America : abbreviate is : %c.%c.%c",c2[0],c2[7],c2[16]);
	printf("\n\t United Arab Emirates : abbreviate is : %c.%c.%c",c3[0],c3[7],c3[12]);
	printf("\n\t India : abbreviate is : %c.%c.%c",c4[0],c4[1],c4[2]);
	printf("\n\t South Africa : abbreviate is : %c.%c",c5[0],c5[6]);
}

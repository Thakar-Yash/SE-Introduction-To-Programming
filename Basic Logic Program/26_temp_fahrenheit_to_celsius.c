/* 26.Convert temperature Fahrenheit to Celsius
	Celsius=(Fahrenheit-32)×5/9
*/

#include<stdio.h>
main()
{
	float C, F;
	
	printf("\t Enter temperature in Fahrenheit : ");
	scanf("%f",&F);
	
	C = (F - 32)*5/9;
	printf("\n\t Temperature in Celsius is : %.2f",C);
}

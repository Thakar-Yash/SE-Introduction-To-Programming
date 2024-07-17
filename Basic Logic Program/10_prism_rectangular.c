//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main(){
	int w, l, h, AR, ARP;
	w = 10;
	h = 10;
	l = 20;
	AR = w*l + h*l + h*w;
	ARP = 2 * AR;
	
	printf ("\t Area of Rectangular prism is : %d",ARP); 
}

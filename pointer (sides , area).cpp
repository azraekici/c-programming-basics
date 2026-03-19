#include <stdio.h>

/*
Write a function compute():
   to receive the lengths of a rectangle as parameters 
   and return the area and circumference of the rectangle

Write a main function, to read the lengths of a rectangle and 
   output its area and circumference by calling the 
   function compute()

*/

void areaC (int *area, int*C, int a, int b);

int main(){
	int a, b, area,circ;
	printf("\nPlease enter the sides of rectangle:");
	scanf("%d %d", &a, &b);
	areaC(&area, &circ,a,b);
	printf("\n area=%d, circumference=%d", area, circ);
	printf("\n area=%d, circumference=%d", &area, &circ);
	
	return (0);
}

void areaC (int *area, int*C, int a , int b){
	*area=a*b;
	*C=(a+b)*2;
}
#include <stdio.h>
/*	Write a c program to calculate a2 + b2 + c2 
	use a power function geting two parameters x and y 
	   y
	(x ) and reurn the power value.
		
*/
int pow(int x,int y);

int main (void) {
int a,b,c;
printf("Taban sayisini yazin:");
scanf("%d",&a);
printf("us sayisini yazin:");
scanf("%d",&b);
c  = pow(a,b);
printf("Sonuc = %d",c);


} // end of main()

int pow(int x,int y) {
	int c=1;
 for (int i = y; i > 0 ;i-- ) {
 	c*=x;
 }
 return c;
}
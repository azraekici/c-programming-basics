#include <stdio.h>
//Write a program to calculate n! 
//where n is taken as an input from the user
/*
					n!
	c(n,r) =    ---------------
					r! (n-r)!

*/

int main (void) {

	int n, r, nfact = 1, rfact=1, nrfact=1;
	
	printf ("\n Please enter the value of n: ");
	scanf ("%d", &n);
	
	printf ("\n Please enter the value of r: ");
	scanf ("%d", &r);

// calculate c(n,r)

	for (int i=2; i<=n; i++)
		nfact = nfact * i;
	
	for (int i=2; i<=r; i++)
		rfact = rfact * i;

	for (int i=2; i<=n-r; i++)
		nrfact = nrfact * i;

	printf (" c (%d,%d) = %d", n, r, nfact / (rfact * nrfact));
	return (0);
	
} // end of main()

#include <stdio.h>
/*  Write a function named order() 
to order two integer values in ascending order.
Write a function named ifOrdered to check 
if elements of an integer array 
are in ascending order or not 
Write a main function to read 10 integers into an array 
from the user and order them in ascending
order by calling the above functions		
*/

void order (int *num1, int *num2){
	int temp;
	if (*num1 > *num2) {
		temp = *num1;
		*num1 = *num2;
		*num2 = temp;
	}
}

int ifOrdered (int arr[], int size) {
	int ordered = 1;
	for (int i=0; i<size-1; i++){
		if (arr[i] > arr[i+1]) {
			ordered =0;
			i=size;
		}
	}	
	return ordered;
}
void printarr (int arr[], int size) {
	printf ("\n");
	for (int i=0; i<size; i++)
		printf ("%6d", arr[i]);
	printf ("\n");
}
int main (void){ 	
	
	int numbers[10], size;
	printf ("\n Please enter how many numbers you want to sort: ");
	scanf ("%d", &size);
	printf ("\n Please enter %d integers: ", size);
	for (int i=0; i<size; i++)
		scanf("%d", &numbers[i]);

	printf ("\The original array is: ");
	printarr (numbers, size);

	do{
		for (int i=0; i<size-1; i++) {
			order (&numbers[i], &numbers[i+1]);
		}
	} while (!ifOrdered (numbers,size));

	printf ("\The ordered array is: ");
	printarr (numbers, size);


	return (0);
	
}


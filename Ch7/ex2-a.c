// Function to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;
	
	for (i = 1; i <= n; i++)
	{
		triangularNumber += i;
	}
	
	return triangularNumber;	
}

int main (void)
{
	int n;
	
	n = 10;
	printf ("Triangular number %i is %i\n", n, 
		calculateTriangularNumber(n));
		
	n = 20;
	printf ("Triangular number %i is %i\n", n, 
		calculateTriangularNumber(n));
	
	n = 30;
	printf ("Triangular number %i is %i\n", n, 
		calculateTriangularNumber(n));
	
	return 0;
}

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

int main(void)
{
	int number;
	int calculateTriangularNumber (int n);
	
	printf ("What triangular number do you want? ");
	
	scanf  ("%i", &number);
			
	printf ("Triangular number %i is %i\n", number, calculateTriangularNumber(number));
	
	return 0;
}

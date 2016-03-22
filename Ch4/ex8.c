#include <stdio.h>

int main (void)
{
	int i, n, number, triangularNumber, counter;
	
	printf("How many triangles would you like to calculate? ");
	scanf("%i", &i);
	
	for ( counter = 1; counter <= i; ++counter)
	{
		printf ("What triangular number do you want? ");
		scanf  ("%i", &number);
		
		triangularNumber = 0;
		
		for ( n = 1; n <= number; ++n)
			triangularNumber += n;
		
		printf ("Triangular number %i is %i\n\n", number, triangularNumber);
	}
	
	return 0;
}

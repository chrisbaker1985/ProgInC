// This program evaluates (3.31e-8 * 2.01e-7) / (7.16e-6 * 2.01*-8)

#include <stdio.h>

int main(void)
{
	// Do the math as instructed
	double result = (3.31e-8 * 2.01e-7) / (7.16e-6 * 2.01*-8);
		
	// Print the result
	printf("The result of (3.31e-8 * 2.01e-7) / (7.16e-6 * 2.01*-8) is %g\n"
	, result);
	
	return 0;
}

// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{
	int number, right_digit;
	_Bool printMinus = 0;
	printf ("Enter your number.\n");
	scanf  ("%i", &number);
	
	while (number != 0) {
		// Get the right most digit
		right_digit = number % 10;
		
		if(right_digit < 0)
		{
			// Check if we're on the last number
			printMinus = number >= -9;
			
			// Make sure to flip the right digit if it's negative.
			right_digit *= -1;
		}	
		
		printf ("%i", right_digit);
		
		// Printing the last minus (if it was negative)!
		if(printMinus) {
			printf("-");
		}
		
		number /= 10;
	}
	
	printf("\n");
	
	return 0;
}

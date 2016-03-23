// Function to calculate the absolute value of a number

#include <stdio.h>

float absoluteValue(float x)
{
	if(x < 0)
	{
		x = -x;
	}
	
	return x;
}


double squareRoot(float x, const double epsilon)
{
	double guess = 1;
	while(
		absoluteValue((absoluteValue(guess * guess)/x) - 1) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
		//printf("This guess is %f\n", guess);
	}
	
	return guess;
}

int main (void)
{
	const double epsilon = .00000000001;
	printf("SquareRoot of (2.0) = %f\n", squareRoot(2.0, epsilon));
	printf("SquareRoot of (144.0) = %f\n", squareRoot(144.0, epsilon));
	printf("SquareRoot of (17.5) = %f\n", squareRoot(17.5, epsilon));
	
	return 0;
}

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

float squareRoot(float x, const float epsilon)
{
	
	float guess = 1;
	
	while(absoluteValue (guess * guess - x) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
	}
	
	return guess;
}

int main (void)
{
	const float epsilon = .00001;
	printf("SquareRoot of (2.0) = %f\n", squareRoot(2.0, epsilon));
	printf("SquareRoot of (144.0) = %f\n", squareRoot(144.0, epsilon));
	printf("SquareRoot of (17.5) = %f\n", squareRoot(17.5, epsilon));
	
	return 0;
}

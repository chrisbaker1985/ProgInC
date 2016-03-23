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


float squareRoot(float x, const double epsilon)
{
	// TODO: Change to use the ratio of the two number instead of g*g-x
	float guess = 1;
	printf("Calculating the square root of %f to %f epsilon accuracy:\n", x, epsilon);
	while(absoluteValue((absoluteValue(guess * guess)/x) - 1) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;
		printf("This guess is %f\n", guess);
		printf("The accuracy is %f", absoluteValue((absoluteValue(guess * guess)/x) - 1));
	}
	
	return guess;
}

int main (void)
{
	const float epsilon = .0000001;
	printf("SquareRoot of (2.0) = %f\n", squareRoot(2.0, epsilon));
	printf("SquareRoot of (144.0) = %f\n", squareRoot(144.0, epsilon));
	printf("SquareRoot of (17.5) = %f\n", squareRoot(17.5, epsilon));
	
	return 0;
}

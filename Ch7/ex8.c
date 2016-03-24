/* ********************************************************************
 * Program to solve the quadratic equation a * (x*x) + b * x + c = 0
 * 
 * 				 b +- sqrt((b*b) - (4 *a * c))
 * 			x = --------------------------------
 * 							 2a
 * 
 * 	Note: if the discriminant ((b * b) - 4 * a * c) is less than 0
 *  	  then the roots (x(1) and x(2)) are imaginary.
 * 
 * 
 *  Task: write a program to solve the quadratic equation. The program
 * 		  should allow the user to enter values for a, b, and c. If
 *        the discriminant is less than 0, display a message that the
 * 		  root are imaginary, otherwise display the two roots of the
 *        equation (b - and b + ...etc).
 * 
 *********************************************************************/

#include <stdio.h>

double squareRoot(float x, const double epsilon);
double getDiscriminant(int a, int b, int c);
void solveAndPrintQuadratic(int a, int b, int c);
float absoluteValue(float x);

int main (void)
{	
	int a, b, c;	
	
	// Get the user input
	printf("Enter a value for a: ");
	scanf("%i", &a);
	
	printf("Enter a value for b: ");
	scanf("%i", &b);
	
	printf("Enter a value for c: ");
	scanf("%i", &c);
		
	// Put it to work and print the resulting solutions.
	solveAndPrintQuadratic(a, b, c);	
	
	return 0;
}

// Check if (b * b) - 4 * a * c)  is less than 0;
double getDiscriminant(int a, int b, int c)
{	
	double discriminant = (b * b) - (4 * a * c);
	return discriminant;
}

/* *******************************************************
 * Solve equation:
 * 
 *   				 b +- sqrt((b*b) - (4 *a * c))
 * 			x = --------------------------------
 * 							 2a
 * 
 * ********************************************************/
void solveAndPrintQuadratic(int a, int b, int c)
{
	double x, discriminantRoot, discriminant = getDiscriminant(a, b, c);
	
	if(discriminant < 0)
	{
		// Imaginary -- Let the user know and RUN AWAY!! :)
		printf("The discriminant is less than 0, so the solution is imaginary\n");
		return;
	}
		
	discriminantRoot = squareRoot(discriminant, .0000001);
	
	x = (-b  + discriminantRoot) * (2 * a);
	
	printf("X1 is %f\n", x);
	
	x = (-b - discriminantRoot) * (2 * a);
	
	printf("X2 is %f\n", x);
}

// Calcluates the quare root of a number to epsilon accuracy
double squareRoot(float x, const double epsilon)
{
	double guess = 1;
	while(
		absoluteValue((absoluteValue(guess * guess)/x) - 1) >= epsilon)
	{
		guess = (x / guess + guess) / 2.0;		
	}
	
	return guess;
}

// Gets the absolute value of a number
float absoluteValue(float x)
{
	if(x < 0)
	{
		x = -x;
	}
	
	return x;
}



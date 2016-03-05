// This program calculate the average of an array of 10 floats

#include <stdio.h>

int main (void)
{
	float input, values[10], total;
	int i;
	
	printf("Enter 10 floating point values: ");
	for(i = 0; i < 10; i++)
	{		
		scanf("%f", &input);
		values[i] = input;
	}
	
	for(i = 0; i < 10; i++)
	{
		total += values[i];
	}
	
	printf("The average is %f!\n", total / 10);
	
	return 0;
}
	
		

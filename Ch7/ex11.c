// This program returns the sum of the elements in an array

#include <stdio.h>
int arraySum(int array[], int count);

int main(void)
{
	int count = 5;
	int myArray[] = { 5, 10, 7, 17, 18, 3 };
	
	printf("The sum of the array is %i\n", arraySum(myArray, count));
}

int arraySum(int array[], int count)
{
	int i, sum = 0;
	
	for(i = 0; i < count; i++)
	{
		sum += array[i];
	}	 
	
	return sum;
}

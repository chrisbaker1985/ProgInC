// This program evaluates 3xe3 - 5xe2 + 6 where x = 2.55

#include <stdio.h>
#include <math.h>

int main(void)
{
	float x = 2.55, result;
	
	result = 3 * (x * x * x) - 5 * (x * x) + 6;
	
	printf("The result of 3xe3 - 5xe2 + 6 where x = 2.55 is %e\n", result);
	
	return 0;
}

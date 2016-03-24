// x_to_the_n() raising x to the nth power, returns long int.
// takes two params x and n

#include <stdio.h>

long int x_to_the_n(int x, int n)
{
	int i;
	long int result = x;
	if(n == 0)
	{
		return 1;
	}
	
	for(i = 0; i < n; i++)
	{
		result *= x;
	}
	
	return result;
}

int main(void)
{
	int x, n;
	long int x_to_the_n(int x, int n);
	
	x = 5;
	n = 3;
	printf("%i to the %i is %li\n", x, n, x_to_the_n(x, n));
	
	x = 6;
	n = 4;
	printf("%i to the %i is %li\n", x, n, x_to_the_n(x, n));
	
	x = 10;
	n = 5;
	printf("%i to the %i is %li\n", x, n, x_to_the_n(x, n));
	
	return 0;
}
	
	

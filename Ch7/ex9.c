/* This program calculates the least common multiple by following
 * the logic: lcm (u, v) = uv / gcd (u, v)		u, v >= 0;		 */

#include <stdio.h>

int gcd (int u, int v);
int lcm (int u, int v);
int getPositiveInt(void);

int main(void)
{
	int u, v;
	
	printf("This program provides the least common multiple of positive two integers\n");
	
	u = getPositiveInt();
	v = getPositiveInt();
	
	printf("The least common multiple of %i and %i is %i\n", u, v, lcm(u,v));
	
	return 0;
}

// This function returns the least common multiple of two integers
int lcm (int u, int v)
{
	return u * v / (gcd(u,v));
}

// This function returns the greatest common divisor of two integers
int gcd (int u, int v)
{
	int temp;

	
	while (v != 0)
	{
		temp = u % v;
		u = v;
		v = temp;
	}
	
	return u;
}

int getPositiveInt(void)
{
	int n = -1;	
	
	while(n <= 0)
	{
		printf("Give me a positive integer: ");
		scanf("%i", &n);
		if(n <= 0)
		{
			printf("Number must be positive!\n");
		}
	}
}

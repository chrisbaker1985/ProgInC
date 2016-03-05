// Program to generate the first 15 Fibonacci numbers
#include <stdio.h>

int main (void)
{
	int i, c, a = 1, b = 2;
	
	a = 1;
	b = 2;
	
	printf("0\n");
	printf("%i\n", a);
	printf("%i\n", b);
	for ( i = 0;  i < 14;  i++ )
	{
		c = a + b;
		a = b;
		b = c;
		printf("%i\n", c);
	}
		
	return 0;
}
	

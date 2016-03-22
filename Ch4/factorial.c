// This program generates a table of factorial values of 1-10

#include <stdio.h>

int main (void)
{
	printf ("  n            n!\n");
	printf ("===================\n");
	
	int i, n = 1;
	for ( i = 1; i <= 10; i++)
	{
		n *= i;
		printf (" %2i       %8i\n", i, n);
	}
	
	return 0;
}

	

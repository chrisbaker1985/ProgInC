// This program displays a table of n and n squared for values 1 - 10

#include <stdio.h>

int main (void)
{
	int i;
	printf ("  n      n^2\n");
	printf ("===============\n");
	
	for ( i = 0; i <= 5; i++)
	{
		printf (" %2i      %3i\n", i, i * i);
	}
		
	return 0;
}

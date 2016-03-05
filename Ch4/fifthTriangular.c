// This program returns every 5th triangular to 50

#include <stdio.h>

int main (void)
{
	int i;
	for (i = 5; i <= 50; i += 5)
	{
		printf("%i\n", i * (i + 1) / 2);
	}
	
	return 0;
}

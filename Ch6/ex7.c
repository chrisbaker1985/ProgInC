/* This program finds all prime numbers up to 150 using
 * Seive of Erathosthenes Algorithm:					
 * Array P elements P(i) set to 0, 2 <= i <= n */

#include <stdio.h>

int main (void)
{
	const int n = 150;
	int i, j, p[n], x;
	
	for(i = 0; i < n; i++)
	{
		p[i] = i % 2 == 0 ? 2 : 0;
	}	
	
	printf("2  "); // Given
	
	for(i = 2; i < n; i++)
	{
		if(p[i] == 0) 
		{
			printf("%i  ", i);
		} 
		else 
		{
			continue;
		}			
		
		
		for(j = 1; j <= n && j <= i; j++)
		{			
			if(i * j <= n - 1) {
				p[i * j] = 1;
			}
		}
	}
	
	printf("\n");
	
	return 0;
}

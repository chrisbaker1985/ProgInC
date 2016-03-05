/* This program asks the user to type in two integers and tests
 * them to determine if the first is evenly divisible by the second */

#include <stdio.h>

int main (void)
{
	int a, b;
	_Bool isDivisible;
	
	
	
	do {
		printf("Give me two non zero integers: ");
		scanf("%i %i", &a, &b);
		if(a == 0 || b == 0){
			printf("Neither number may be zero!\n");
		}
	}
	while(a == 0 || b == 0);
	
	if(a % b == 0)
		printf("The numbers are evenly divisible!\n");
	else
		printf("The numbers are NOT evenly divisible!\n");
				
	return 0;
}
		
	
	

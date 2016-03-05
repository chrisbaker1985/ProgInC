/* This program converts 27 deg (F) to celsius (C)
 * using formula C = (F - 32) / 1.8 */

#include <stdio.h>

int main(void)
{
	float f = 27, c;
	
	c = (f - 32) / 1.8;
	
	printf("28 degrees fahrenheit is %f degrees celsius!\n", c);
	
	return 0;
}
	

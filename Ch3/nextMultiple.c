/* 
 *  This program evaluates three sets of constants [i, j] with 
 *  the formula Next_multiple = i + j - i % j 
 * 
 *  The set of contants are as follows:
 *  [365, 7],[12258, 23],[996, 4]
 */
 
#include <stdio.h>

int nextMultiple(int i, int j);

int main(void)
{
	printf("The next multiple of 365 and 7 is %i\n", nextMultiple(365, 7));
	printf("The next multiple of 12258 and 23 is %i\n", nextMultiple(12258, 23));
	printf("The next multiple of 996 and 4 is %i\n", nextMultiple(996, 4));
}

int nextMultiple(int i, int j)
{	
	return i + j - i % j;
}

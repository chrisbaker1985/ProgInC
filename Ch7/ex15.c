// Program to convert a positive integer to another base

#include <stdio.h>

int 		convertedNumber[64];
long int 	numberToConvert;
int 		base;
int 		digit = 0;

void getNumberAndBase (void)
{	
	printf("Number to be converted? ");
	scanf("%li", &numberToConvert);
		
	do
	{
		printf("Please provide a base to convert to between 2 and 16: ");
		scanf("%i", &base);
		if(base < 2)
		{
			printf("Base is too low!\n");
		}
		else if(base > 16)
		{
			printf("Base is too high\n");
		}
	}
	while(base < 2 || base > 16);	
}

void convertNumber (void)
{
	do 
	{
		convertedNumber[digit] = numberToConvert % base;
		digit++;
		numberToConvert /= base;
	}
	while (numberToConvert != 0);
}

void displayConvertedNumber(void)
{
	const char baseDigits[16] =
			{ '0', '1', '2', '3', '4', '5', '6', '7',
			  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'  };
			  
	int nextDigit;
	
	printf ("Converted Number = ");
	
	for(digit--; digit >= 0; digit--)
	{
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}
	
	printf("\n");
}

int getBaseInput(void)
{

}
int main (void)
{
	void getNumberAndBase (void), convertNumber (void),
		 displayConvertedNumber(void);
	
	getNumberAndBase();
	convertNumber();
	displayConvertedNumber();
	
	return 0;
}		  

// Program to convert a positive integer to another base

#include <stdio.h>

int 		convertedNumber[64];
long int 	numberToConvert;
int 		base;
int 		digit = 0;

void getBase (void)
{		
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
	digit = 0;
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


int main (void)
{
	void getBase (void), convertNumber (void),
		 displayConvertedNumber(void);
	
	do
	{		
		printf("Number to be converted (0 - Exits Program)? ");
		scanf("%li", &numberToConvert);
		if(numberToConvert == 0)
		{
			break;
		}
		
		getBase();
		convertNumber();
		displayConvertedNumber();
	}
	while(1);
	
	return 0;
}		  

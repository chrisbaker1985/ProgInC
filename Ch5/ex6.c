// This program takes an integer and returns the numbers as words

#include <stdio.h>
#include <string.h>

int main(void)
{
	int i = 0, n, multiplier, input, lastDigit, tempNumber;
	_Bool isNegative = 0;		
	printf("Give me a number, any number: ");
	scanf("%i", &input);

	if(input < 0)
	{
		isNegative = 1;
		input *= -1;
	}
	
	tempNumber = input;
	while(tempNumber != 0)
	{
		multiplier = 1;
		for(n = 0; n < i; n++)
		{
			multiplier *= 10;
		}
		
		lastDigit = tempNumber % 10;		
		//newNumber += lastDigit * multiplier;
		tempNumber /= 10;
		i++;
	}
		
	if(isNegative)
	{
		printf("minus   ");
	}
	
	while(multiplier != 0)
	{		
		tempNumber = input;
		// This is the original first number now.
		lastDigit =  tempNumber / multiplier;
		
		// Printing the number as a word.
		switch(lastDigit)
		{
			case 0:
				printf("zero  ");
				break;
			case 1:
				printf("one  ");
				break;
			case 2:
				printf("two  ");
				break;
			case 3:
				printf("three  ");
				break;
			case 4:
				printf("four  ");
				break;
			case 5:
				printf("five  ");
				break;
			case 6:
				printf("six  ");
				break;
			case 7:
				printf("seven  ");
				break;
			case 8:
				printf("eight  ");
				break;
			case 9:
				printf("nine  ");
				break;
		}
		
		input -= lastDigit * multiplier;
		multiplier /= 10;
	}
	
	printf("\n");
	
	return 0;
}
	
		
		

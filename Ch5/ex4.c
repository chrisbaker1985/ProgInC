/* This program is a printing calculator, that works through
 * 	user input on each line. 									*/

#include <stdio.h>

int main(void)
{
	float number, total = 0;
	char operator;
	
	printf("Enter a number followed by one of the following characters:\n");
	printf("S - Sets the accumulator to the given value\n");
	printf("+ - Adds the given value to the accumulator total\n");
	printf("- - Subtracts the given value from the accumulator total\n");
	printf("/ - Divides the current accumlator value by the given value\n");
	printf("* - Multiplies the accumulator total by the given value\n");
	printf("E - Ends the program\n");
	printf("Begin Calculations\n");
	
	do
	{
		scanf("%f %c", &number, &operator);
		
		switch(operator)
		{
			case 'S': // Sets the accumulator.
				total = number;
				break;
			case '+':
				total += number;
				break;
			case '-':
				total -= number;
				break;
			case '*':
				total *= number;
				break;
			case '/':
				if(number == 0)
				{
					printf("Cannot divide by 0!\n");
				} 
				else
				{
					total /= number;
				}
				break;
			case 'E': // Do nothing -- program ending;
				break;
			default: // Whoops, wrong input.
				printf("Invalid operator!\n");
				break;
		}
		printf("= %.6f\n", total);
	}
	while(operator != 'E');
	
	// E received - End program.		
	printf("End of Calculations.\n");
		
	return 0;
}
				
		
	
	

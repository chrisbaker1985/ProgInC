// Function to convert a string to an float

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	float strToFloat(const char string[]);
	
	printf("%.4f\n", strToFloat("-24.6921"));	
	
	return 0;
}


float strToFloat(const char string[])
{
	int i = 0, intValue, decimalPlace = -1, 
	    getExponent(int number, int exponent); 
	    
	float result = 0.00;
	
	bool isNegative = false;
	if(string[i] == '-')
	{
		isNegative = true;
		i++;
	}
	
	for (; (string[i] >= '0' && string[i] <= '9') || string[i] == '.' ; i++)
	{
		if(string[i] == '.')
		{
			decimalPlace = i;			
		}
		else
		{			
			intValue = string[i] - '0';
			result = result * 10 + intValue;			
		}		
	}
	
	if(decimalPlace != -1)
	{		
		result /= getExponent(10, i - decimalPlace);
	}
	
	if(isNegative)
	{
		result *= -1;
	}
	
	return result;
}

int getExponent(int number, int exponent)
{
	int i, result = number;
	
	for(i = 2; i < exponent; i++)
	{
		result *= number;
	}
	
	return result;
}

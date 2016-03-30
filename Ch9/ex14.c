// Program that converts integers to strings

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	void intToString(int n, char returnArray[]);
	char returnArray[50] = "";
	int a = -752;
	printf("Starting: %i\n", a);
	
	intToString(a, returnArray);
	
	printf("As string: %s\n", returnArray);
	
	return 0;
}

void intToString(int n, char returnArray[])
{
	char tempArray[50] = "";
	char intToChar(int n);
	int i = 0, j = 0;
	bool isNegative = false;
	if(n < 0)
	{
		isNegative = true;
		n *= -1;
	}
	
	while(n > 0)
	{
		tempArray[i] = intToChar(n % 10);
		n /= 10;
		i++;
	}	
	
	if(isNegative)
	{
		tempArray[i] = '-';
	} 
	else
	{
		i--;
	}	

	while(i >= 0)
	{		
		returnArray[j] = tempArray[i];
		i--;
		j++;		
	}
	
	returnArray[j] = '\0';
}

char intToChar(int n)
{
	return (char)(n + '0');
}

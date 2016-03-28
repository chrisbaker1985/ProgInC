// Simple substring function -- returns a part of a string array.

#include <stdio.h>

int main(void)
{
	void substring(char source[], const int start, const int count, char result[]);
	char result[100];
	
	substring("two words", 4, 40, result);
	
	printf("%s\n", result);
	return 0;
}

void substring(char source[], const int start, const int count, char result[])
{
	int i = 0;
	
	while(i < count && source[i] != '\0')
	{		
		result[i] = source[start + i];
		i++;
	}	
	
	result[i] = '\0';
}

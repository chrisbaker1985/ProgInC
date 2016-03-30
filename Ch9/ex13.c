/* Program that converts all characters in a string to upper case
 * using formula c - 'a' + 'A'										*/

#include <stdio.h>

int main(void)
{
	void convertStringToUpper(char string[]);
	char string[] = "There once was a girl named Alesia";
	
	printf("%s\n", string);
	
	convertStringToUpper(string);
	
	printf("%s\n", string);
	return 0;
}

char toUpperCase(char c)
{	
	return c - 'a' + 'A';
}

void convertStringToUpper(char string[])
{
	int i = 0;
	char toUpperCase(char c);
	while(string[i] != '\0')
	{
		if(string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = toUpperCase(string[i]);
		}
		i++;
	}
}

// Function that inserts a string into another string.

#include <stdio.h>

void insertString(char source[], char string[], int position)
{
	int i = 0, j = 0, k = 0;
	char temporaryString[500];
	
	while(source[k] != '\0')
	{	
		if(i == position + j && string[j] != '\0')
		{
			temporaryString[i] = string[j];		
			j++;
		}
		else
		{
			temporaryString[i] = source[k];
			k++;
		}
		
		i++;
	}
	
	
	source[i] = '\0';
	
	printf("Temp string: %s\n", temporaryString);
	
	i = 0;
	while(temporaryString[i] != '\0')
	{
		source[i] = temporaryString[i];
		i++;
	}
}

int main(void)
{
	char text[100] = "the wrong son";
	
	insertString(text, "per", 10);
	
	printf("%s\n", text);
	
	return 0;
}

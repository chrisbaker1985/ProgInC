// Function that finds a string with another string

#include <stdio.h>
#include <stdbool.h>

bool findString(char source[], char search[])
{
	int i = 0, j = 0;
	bool stringFound = false, searchStartFound = false;
	while(source[i] != '\0' && !stringFound)
	{
		if(source[i] == search[j] && search[j] != '\0')
		{			
			searchStartFound = true;
			j++;
			if (search[j] == '\0') // We're done. stop searching.
			{
				return true;
			}			
		}		
		else
		{
			searchStartFound = false;
			j = 0;
		}
		
		i++;
	}
	
	return false;
}

int main(void)
{
	bool findString(char source[], char search[]);
	
	if(findString("a chatterbox", "hat"))
	{
		printf("Found the word!");
	}
	else
	{
		printf("Didn't find the word!");
	}
	
	printf("\n");
	
	return 0;
}

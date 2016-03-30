/* This program defines a new function called replaceString 
 * making use of find, remove, and insert string functions to 
 * remove a string and replace the removed string with a new
 * string at that location.									*/ 

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	void replaceString(char source[], const char s1[], const char s2[]);
	//char text[100] = "There's more than 1 way to skin a cat";
	char text[100] = "Replace 1 character";
	
	replaceString(text, "1", "one");
	
	printf("%s\n", text);
}

void replaceString(char source[], const char s1[], const char s2[])
{		
	void insertString(char source[], const char string[], const int position),
		 removeString(char source[], const int start, const int count);
	
	int findString(const char source[], const char search[]),
		getStringLength(const char source[]),
		startIndex = -1;
	
	startIndex = findString(source, s1);	
	if(startIndex != -1) // It was found
	{	
		removeString(source, startIndex, getStringLength(s1) + 1);		
		insertString(source, s2, startIndex);	
	}	
}

void removeString(char source[], const int start, const int count)
{
	int i = 0, j = 0;	
	
	while(source[i] != '\0')
	{	
		
		if(i == start - 1) // Skip count from the starting point (by index)
		{
			i += count;
		}
		else 
		{
			source[j] = source[i];
			i++;
		}
		j++;		
	}
	source[j] = '\0';	
}

void insertString(char source[], const char string[], const int position)
{
	int i = 0, j = 0, k = 0, strLen = getStringLength(string),
	newStrLen = strLen + getStringLength(source);
	
	char buffer[100] = "";
	
	while(source[i] != '\0')
	{
		buffer[i] = source[i];
		i++;
	}
	
	buffer[i] = '\0';	
	i = 0;
	while(i <= newStrLen)
	{
					
		if(i >= position && i <= position + strLen - 1)
		{			
			source[i] = string[j];		
			j++;
		}
		else
		{			
 			source[i] = buffer[k];
			k++;
		}
		i++;		
	}
	source[i + 1] = '\0';
}

int getStringLength(const char source[])
{
	int i = 0;
	
	while(source[i] != '\0')
	{
		i++;
	}	
	
	return i;
}

int findString(const char source[], const char search[])
{
	int i = 0, j = 0, stringFoundIndex = -1;
	bool stringFound = false;	
	while(source[i] != '\0' && !stringFound)
	{
		if(source[i] == search[j] && search[j] != '\0')
		{			
			if(stringFoundIndex == -1)
			{
				stringFoundIndex = i; // This will be the return									
			}
			
			j++; // iterate before continuing;
			
			if (search[j] == '\0') // We're done. stop searching.
			{							
				break;
			}
		}
		else
		{			
			stringFoundIndex = -1;
			j = 0;
		}		
		i++;
	}	
	return stringFoundIndex;
}


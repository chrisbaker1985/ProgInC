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
	char text[100] = "Chris loves his wife";
	
	replaceString(text, "his wife", "Alesia");
	
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
		removeString(source, startIndex, getStringLength(s1));		
		insertString(source, s2, startIndex);	
	}
}

void removeString(char source[], const int start, const int count)
{	
	int i = start + count;
	while(source[i] != '\0')
	{	
		source[i - count] = source[i];
		i++;
	}
	source[i - 1] = '\0';
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

void insertString(char source[], const char string[], const int position)
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
		
	i = 0;	
	while(temporaryString[i] != '\0')
	{
		source[i] = temporaryString[i];
		i++;
	}
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

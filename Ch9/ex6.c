// Function that removes (splice) characters from a string

#include <stdio.h>

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
int main(void)
{
	void removeString(char source[], const int start, const int count);
	char text[100] = "Chris loves his wife";
		
	removeString(text, 5, 8);
	removeString(text, 5, 8);
	
	printf("%s\n", text);
	
	
	return 0;
}

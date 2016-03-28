// Function that removes (splice) characters from a string

#include <stdio.h>

void removeString(char source[], const int start, const int count)
{
	int i = 0;	
	
	while(i < count && source[i] != '\0')
	{	
		if(i < start || i > start + count)
		{
			source[i] = source[i];
			i++;			
		}
		else
		{
			i += count;
		}				
	}
	source[i] = '\0';
}

int main(void)
{
	void removeString(char source[], const int start, const int count);
	char text[] = "the wrong son";
		
	removeString(text, 4, 6);
	
	printf("%s\n", text);
	
	
	return 0;
}

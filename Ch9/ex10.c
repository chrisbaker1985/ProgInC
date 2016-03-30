// Sorts a dictionary

#include <stdio.h>

struct entry
{
	char word[15];
	char definition[50];
};

void sortEntriesByWord(struct entry a[], int n);	
void printDictionaryEntries(struct entry d[], int c);
int compareStrings(const char s1[], const char s2[]);

int main(void)
{
	struct entry dictionary[100] = 
	{ { "ahoy", "a nautical call of greeting"			},
	  { "aardvark", "a burrowing African mammal"		},
	  { "aigrette", "an ornamental cluster of feathers"	},
	  { "abyss", "a bottomless pit" 		 			},
	  { "acumen", "mentally sharp; keen"				},	  
	  { "affix", "to append; attach"					},
	  { "addle", "to become confused"					},
	  { "aerie", "a high nest"							},
	  { "ajar", "partially opened"						},
	  { "agar", "a jelly made from seaweed"				} };
	  
	
	printf("Before sort:\n");
	printDictionaryEntries(dictionary, 10);
    
    sortEntriesByWord(dictionary, 10);
    printf("\n\n");
    printf("After sort:\n");
	printDictionaryEntries(dictionary, 10);
	return 0;
}

void printDictionaryEntries(struct entry d[], int c)
{
	int i;
	for(i = 0; i < c; i++)
	{
		printf("%s - %s\n", d[i].word, d[i].definition);
    }
}
void sortEntriesByWord (struct entry a[], int n)
{
	int i, j;	
	struct entry tmp;
	
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if(compareStrings(a[i].word, a[j].word) == 1)
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

// Function to compare two character strings
int compareStrings(const char s1[], const char s2[])
{
	int i = 0, answer;
	
	while(s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
		
		if(s1[i] < s2[i])
		{
			answer = -1;
		}
		else if (s1[i] == s2[i])
		{
			answer = 0;
		}
		else
		{
			answer = 1;
		}		
	}
	
	return answer;
}

// inserts a new entry into a linked list

/* program shows an example of a doubly linked list and prints the
 * entries forwards as well as backwards							*/


#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
	struct entry *previous;
};

int main(void)
{
	void printEntryValues(struct entry *listPtr, int count, int direction);
	
	struct entry n1, n2, n3;
	struct entry *listStart;
	
	n1.value = 100;
	n1.next = &n2;
	n1.previous = &n3;
		
	n2.value = 200;
	n2.next = &n3;	
	n2.previous = &n1;
	
	n3.value = 300;
	n3.next = &n1;
	n3.previous = &n2;
	
	printf("Entires from start to end: ");
	
	listStart = &n1;
	printEntryValues(listStart, 3, 1);
	
	printf("Entires from end to start: ");
	listStart = &n3;
	printEntryValues(listStart, 3, -1);
}

// Prints the values of a linked list. -1 = backwards, 1 = forwards
void printEntryValues(struct entry *listPtr, int count, int direction)
{
	int i = 1;
	if(direction > 0) 
	{
		while(listPtr != (struct entry *) 0 && i <= count)
		{
			printf("%i  ", listPtr->value);
			listPtr = listPtr->next;
			i++;
		}
	}
	else
	{
		while(listPtr != (struct entry *) 0 && i <= count)
		{
			printf("%i  ", listPtr->value);
			listPtr = listPtr->previous;
			i++;				
		}
	}
	printf("\n");
}

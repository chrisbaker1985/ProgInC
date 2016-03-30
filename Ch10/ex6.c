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
	void removeEntry(struct entry *removedEntry);
	void insertEntry(struct entry *newEntry, struct entry *previousEntry);
	struct entry n1, n2, n3, n4;
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
	
	n4.value = 400;
	
	listStart = &n1;
	printf("Entries before start: ");
	printEntryValues(listStart, 3, 1);
	
	insertEntry(&n4, &n3);	
	printf("Entries after insert: ");
	printEntryValues(listStart, 4, 1);
	
	removeEntry(&n2);
	printf("Entires after remove: ");
	printEntryValues(listStart, 3, 1);
	
	insertEntry(&n2, &n1);	
	printf("Entries after insert: ");
	printEntryValues(listStart, 4, 1);
	
	removeEntry(&n3);
	printf("Entires after remove: ");
	printEntryValues(listStart, 3, 1);	
	
	insertEntry(&n3, &n2);
	printf("Entries after insert: ");
	printEntryValues(listStart, 4, 1);
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

// Removes the next entry in the list
void removeEntry(struct entry *removedEntry)
{	
	struct entry *previousEntry = removedEntry->previous;
	struct entry *nextEntry = removedEntry->next;
	removedEntry->previous->next = removedEntry->next;
	removedEntry->next->previous = removedEntry->previous;
}

// Function that inserts a new entry and pointer element into a linked list
void insertEntry(struct entry *newEntry, struct entry *previousEntry)
{	
	newEntry->next = previousEntry->next;
	newEntry->previous = previousEntry->next->previous;
	previousEntry->next = newEntry;
	newEntry->next->previous = newEntry;		
}

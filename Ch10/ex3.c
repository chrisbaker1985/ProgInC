// inserts a new entry into a linked list

#include <stdio.h>

struct entry
{
	int value;
	struct entry *next;
};

int main(void)
{
	void printEntryValues(struct entry *listPtr, int count);
	void insertEntry(struct entry *newEntry, struct entry *entryBefore);
	
	struct entry n1, n2, n3, n4;
	
	n1.value = 100;
	n1.next = &n2;
		
	n2.value = 200;
	n2.next = &n3;	
	
	n3.value = 300;
	n3.next = &n1;	
	
	n4.value = 400;
		
	insertEntry(&n4, &n3);
	
	struct entry *listStart = &n4;
	
	printEntryValues(listStart, 4);
}

// Function that inserts a new entry and pointer element into a linked list
void insertEntry(struct entry *newEntry, struct entry *entryBefore)
{	
	newEntry->next = entryBefore->next;		
	entryBefore->next = newEntry;		
}

void printEntryValues(struct entry *listPtr, int count)
{
	int i = 1;
	while(listPtr != (struct entry *) 0 && i <= count)
	{
		printf("%i  ", listPtr->value);
		listPtr = listPtr->next;
		i++;
				
	}
	printf("\n");
}

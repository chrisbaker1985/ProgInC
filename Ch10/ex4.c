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
	void removeNextEntry(struct entry *entryBefore);
	
	struct entry n1, n2, n3;
	
	n1.value = 100;
	n1.next = &n2;
		
	n2.value = 200;
	n2.next = &n3;	
	
	n3.value = 300;
	n3.next = &n1;
	
		
	removeNextEntry(&n2);
	
	struct entry *listStart = &n1;
	
	printEntryValues(listStart, 2);
}

// Removes the next entry in the list
void removeNextEntry(struct entry *entryBefore)
{	
	entryBefore->next = entryBefore->next->next;
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

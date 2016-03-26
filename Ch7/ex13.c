// Program to sort an array of integers into ascending order

#include <stdio.h>

void sort (int a[], int n, int sortOrder)
{
	int i, j, tmp;
	
	for(i = 0; i < n - 1; i++)
	{
		for(j = i + 1; j < n; j++)
		{
			if((sortOrder == 0 && a[i] > a[j]) || (sortOrder == 1 && a[i] < a[j]))
			{
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void printArray(int array[], int c)
{
	int i;
	for(i = 0; i < c; i++)
	{
		printf ("%i ", array[i]);
	}	
}

int main(void)
{
	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
					  44, -3, -9, 12, 17, 22, 6, 11 };
	
	void sort(int a[], int n, int sort); 
	void printArray(int array[], int c);
	
	printf ("\n\nThe array before the sort: \n");
	
	printArray(array, 16);
	
	sort(array, 16, 0);
	
	printf("\n\nThe array after the sort in ascending order: \n");	
	
	printArray(array, 16);
	
	sort(array, 16, 1);
	
	printf("\n\nThe array after the sort in descending order: \n");
		
	printArray(array, 16);
	
	printf("\n");
	
	return 0;
}

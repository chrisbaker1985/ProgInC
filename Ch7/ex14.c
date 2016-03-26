// Program to convert a positive integer to another base

#include <stdio.h>

// Global variables
int global_input;
int global_count = 5;
int global_myArray[] = { 5, 10, 7, 17, 18, 3 };
int global_matrixA[5][4] =
	{
		{ 5, 6, 4, 3 },
		{ 12, -3, 5, 6 },
		{ -16, -14, 3, 2 },
		{ 20, 101, -12, 3 },
		{ 2, -16, -7, -2 }
	};
int global_matrixB[4][5];
int global_array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
					  44, -3, -9, 12, 17, 22, 6, 11 };

// Global methods
int getPositiveInt(void);
int isPrime(int n);
int arraySum(int array[], int count);
void printMatrix(int rowc, int colc, int matrix[rowc][colc]);
void transposeMatrix(int nRowsA, int nColsA,
					 int nRowsB, int nColsB, 
					 int matrixA[nRowsA][nColsA], 
					 int matrixB[nRowsB][nColsB]);
void sort(int a[], int n, int sort); 
void printArray(int array[], int c);

int main(void)
{
	// Exercise 10
	
	global_input = getPositiveInt();
	printf("%i\n", isPrime(global_input));
	
	// End Exercise 10
	
	// Exercise 11
	
	printf("The sum of the array is %i\n", arraySum(global_myArray, global_count));
	
	// End Exercise 11
	
	// Exercise 12
	
	printf("Original matrix: \n");
	printMatrix(4, 5, global_matrixA);
	
	transposeMatrix(4, 5, 5, 4, global_matrixA, global_matrixB);
	 
	printf("Transposed matrix: \n");
	printMatrix(5, 4, global_matrixB);
	
	// End Exercise 12
	
	// Exercise 13
	
	printf ("\n\nThe array before the sort: \n");
	
	printArray(global_array, 16);
	
	sort(global_array, 16, 0);
	
	printf("\n\nThe array after the sort in ascending order: \n");	
	
	printArray(global_array, 16);
	
	sort(global_array, 16, 1);
	
	printf("\n\nThe array after the sort in descending order: \n");
		
	printArray(global_array, 16);
	
	printf("\n");
	
	// End Exercise 13
	
	return 0;
}

int isPrime(int n)
{
	int i;
	
	// Automatic primes
	if(n == 1 || n == 2 || n == 3)
	{
		return 1;
	}
	
	// Even numbers aren't prime...
	if(n % 2 == 0 || n % 5 == 0)
	{
		return 0;
	}
	
	for(i = 3; i < n / 2; i += 2)
	{
		if(i % 5 == 0)
		{
			continue;
		}
		
		if(n % i == 0)
		{
			return 0;
		}
	}
	
	return 1;
}

int getPositiveInt(void)
{
	int n = 0;	
	
	while(n <= 0)
	{
		printf("Give me a positive integer: ");
		scanf("%i", &n);
		if(n <= 0)
		{
			printf("Number must be positive!\n");
		}
	}
}

int arraySum(int array[], int count)
{
	int i, sum = 0;
	
	for(i = 0; i < count; i++)
	{
		sum += array[i];
	}	 
	
	return sum;
}

void transposeMatrix(int nRowsA, int nColsA, int nRowsB, int nColsB, 
	int matrixA[nRowsA][nColsA], int matrixB[nRowsB][nColsB])
{
	int i, j;
	for(i = 0; i < nRowsA; i++)
	{
		for(j = 0; j < nColsA; j++)
		{			
			matrixB[j][i] = matrixA[i][j];
		}
	}
}

void printMatrix(int rowc, int colc, int matrix[rowc][colc])
{
	int row, column;

	for(row = 0; row < rowc; row++)
	{
		for(column = 0; column < colc; column++)
		{
			printf("%5i", matrix[row][column]);
		}

	printf("\n");
	}
}


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



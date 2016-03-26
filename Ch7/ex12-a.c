/* This program takes a 4 x 5 matrix and a 5 x 4 matrix and
 * transposes the 4 x 5 matrix to store the results in a 5 x 4 matrix */
 
 #include <stdio.h>
 
void printMatrix(int rowc, int colc, int matrix[rowc][colc]);
void transposeMatrix(int matrixA[5][4], int matrixB[4][5]);
 
void transposeMatrix(int matrixA[5][4], int matrixB[4][5])
{
	int i, j;
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 4; j++)
		{			
			matrixB[j][i] = matrixA[i][j];
		}
	}
}

int main (void)
{
	int matrixA[5][4] =
	{
		{ 5, 6, 4, 3 },
		{ 12, -3, 5, 6 },
		{ -16, -14, 3, 2 },
		{ 20, 101, -12, 3 },
		{ 2, -16, -7, -2 }
	};
		
	int i, n, matrixB[4][5];
	
	printf("Original matrix: \n");
	printMatrix(4, 5, matrixA);
	
	transposeMatrix(matrixA, matrixB);
	 
	printf("Transposed matrix: \n");
	printMatrix(5, 4, matrixB);
	 
	return 0;
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

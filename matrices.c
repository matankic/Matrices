#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrices.h"

void createMatrix(int ***pMat, int rows, int cols){
	srand(time(NULL));
	// Creating the matrix //
	int i, j, **r = (int **)malloc(rows * sizeof(int *));
	for (i = 0; i < rows; i++)
		*(r + i) = (int *)malloc(cols * sizeof(int));
	// Initialing the matrix //
	for (i = 0; i < rows; i++)
		for (j = 0; j < cols; j++)
			*(*(r + i) + j) = rand() % 10;
	// Redirecting the pointer //
	*pMat = r;
}
void swapRows(int **pMat, int row1, int row2){
	int *tmp = *(pMat + row1);
	*(pMat + row1) = *(pMat + row2);
	*(pMat + row2) = tmp;
}
void swapCols(int **pMat, int rows, int col1, int col2){
	int i;
	for (i = 0; i < rows; i++){
		int tmp = *(*(pMat + i)+col1);
		*(*(pMat + i)+col1) = *(*(pMat + i)+col2);
		*(*(pMat + i)+col2) = tmp;
	}
}
void printMat(int **pMat, int rows, int cols){
	int i, j;
	for (i = 0; i < rows; i++){
		for (j = 0; j < cols; j++)
			printf("%2d",*(*(pMat + i) + j));
		printf("\n");
	}
}
void freeMat(int ***pMat, int rows){
	int i;
	for (i = 0; i < rows; i++){
		free(*(*pMat + i));
		*(*pMat + i) = NULL;
	}
	free(*pMat);
	*pMat = NULL;
	printf("\nMatrix was freed successfully.\n");
}

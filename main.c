#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "matrices.h"

int main(){
	srand(time(NULL));
	int **Mat = NULL, r, c;
	printf("Please enter number of rows : \n");
	scanf("%d", &r);
	printf("Please enter number of columns : \n");
	scanf("%d", &c);
	createMatrix(&Mat, r, c);
	printf("Original matrix (%dx%d) : \n", r, c);
	printMat(Mat, r, c);
	// swapping rows //
	int r1 = rand() % r, r2 = rand() % r;
	printf("\nRows %d and %d had swapped : \n", r1+1, r2+1);
	swapRows(Mat, r1, r2);
	printMat(Mat, r, c);
	// swapping columns //
	int c1 = rand() % c, c2 = rand() % c;
	printf("\nColumns %d and %d had swapped : \n", c1+1, c2+1);
	swapCols(Mat, r, c1, c2);
	printMat(Mat, r, c);
	freeMat(&Mat, r);
	// extras - triangular matrices //
	printf("\nLower triangular matrix : \n");
	Mat = createLowerTriangular(r, c);
	printLowerTriangular(Mat, r, c);
	int i = rand() % r, j = rand() % c;
	printf("\nValue of cell (%d,%d) : %d\n", i+1, j+1, lowerTriangularCellValue(Mat, i, j));
	freeMat(&Mat, r);
	printf("\nUpper triangular matrix : \n");
	Mat = createUpperTriangular(r, c);
	printUpperTriangular(Mat, r, c);
	printf("\nValue of cell (%d,%d) : %d\n", i+1, j+1, upperTriangularCellValue(Mat, i, j));
	freeMat(&Mat, r);
	return 0;
}

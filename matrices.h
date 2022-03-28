#ifndef MATRICES_H_
#define MATRICES_H_

// Basic tools for matrices //
void createMatrix(int ***, int, int);
void swapRows(int **, int, int);
void swapCols(int **, int, int, int);
void printMat(int **, int, int);
void freeMat(int ***, int);
//--------------------------//
// Extras - triangular matrices //
// Lower triangular matrix //
int ** createLowerTriangular(int, int);
int lowerTriangularCellValue(int **, int, int);
void printLowerTriangular(int **, int, int);
// Upper triangular matrix //
int ** createUpperTriangular(int, int);
int upperTriangularCellValue(int **, int, int);
void printUpperTriangular(int **, int, int);
//------------------------------//

#endif

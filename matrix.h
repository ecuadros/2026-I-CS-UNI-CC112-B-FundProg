#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include "types.h"

void CreateMatrix(TP **&pMat, const size_t rows, const size_t cols);
void ReadMatrix(TP **pMat, const size_t rows, const size_t cols);
void PrintMatrix(TP **pMat, const size_t rows, const size_t cols);
void DeleteMatrix(TP **&pMat, const size_t rows);

void DemoMatrix1();

#endif // __MATRIX_H__
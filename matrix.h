#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>
#include "types.h"

using namespace std;

void CreateMatrix(TP **&pM, const size_t rows, const size_t cols);
void ReadMatrix  (TP **pM, const size_t rows, const size_t cols);
void PrintMatrix (TP **pM, const size_t rows, const size_t cols);
void DeleteMatrix(TP **&pM, const size_t rows);

void DemoMatrix1();

#endif // __MATRIX_H__
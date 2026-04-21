#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream> 
#include "types.h"

void CreateMatrix(TP **&pm, const size_t rows, const size_t cols);
void ReadMatrix  (TP **pm, const size_t rows, const size_t cols);
void PrintMatrix (TP **pm, const size_t rows, const size_t cols);
void DeleteMatrix(TP **&pm, const size_t rows);

void DemoMatrix1();

#endif // __MATRIX_H__
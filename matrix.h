#ifndef __MATRIX_H__
#define __MATRIX_H__

#include "types.h"
#include <cstddef>

void CreateMatrix(TP **&pm, const size_t n, const size_t m);
void ReadMatrix  (TP **pm, const size_t n, const size_t m);
void PrintMatrix (TP **pm, const size_t n, const size_t m);
void DeleteMatrix(TP **&pm, const size_t n);

void DemoMatrix1();

#endif // __MATRIX_H__
#ifndef __MATRIX_H__
#define __MATRIX_H__
#include <iostream>
#include <cstddef>
#include "types.h"
using namespace std;


template <typename TP>
void CreateMatrix(TP **&pMat, size_t rows, size_t cols){
    pMat = new TP*[rows];
    for(size_t i=0; i<rows; ++i){
        pMat[i] = new TP[cols];
    }
}

template <typename TP>
void ReadMatrix(TP **pMat, size_t rows, size_t cols, ostream &os, istream &is){
    for (size_t i = 0; i < rows; ++i){
        for (size_t j = 0; j < cols; ++j){
            os << "Ingrese pMat[" << i << "][" << j << "]: ";
            is >> pMat[i][j];
        }
    }
}

template <typename TP>
void TransformarMatriz(TP **pMat, size_t rows, size_t cols){
    for (size_t i = 0; i < rows; ++i){
        for (size_t j = 0; j < cols; ++j){
            pMat[i][j] ++;
        }
    }
}

template <typename TP>
void productoMatriz(TP **pMat1, size_t row1, TP **pMat2, size_t col2,
                    TP **pMat3, size_t ind){
    for (size_t i = 0; i < row1; ++i){
        for (size_t j = 0; j < col2; ++j){
            pMat3[i][j] = 0;
            for (size_t k=0; k < ind; ++k){
                pMat3[i][j] += pMat1[i][k] * pMat2[k][j];
            }
        }
    }
}

template <typename TP>
void PrintMatrix (TP **pMat, size_t rows, size_t cols, ostream &os){
    os << rows << " " << cols << endl;
    for (size_t i = 0; i < rows; ++i){
        for (size_t j = 0; j < cols; ++j){
            os << pMat[i][j] << " ";
        }
        os << endl;
    }
}

template <typename TP>
void DeleteMatrix(TP **&pMat, size_t rows){
    for(size_t i=0; i<rows; ++i){
        delete[] pMat[i];
        pMat[i] = nullptr;
    }
    
    delete[] pMat;
    pMat = nullptr;
}

void DemoMatrix1();

#endif // __MATRIX_H__
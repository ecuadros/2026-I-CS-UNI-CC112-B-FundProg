#include "matrix.h"
#include <iostream>
#include "sorting.h"
using namespace std;

void  CreateMatrix(TP **&pMat, size_t rows, size_t cols){
    pMat = new TP* [rows];
    for (size_t i = 0; i < rows; ++i) {
        pMat[i] = new TP [cols];
    }
}

void ReadMatrix(TP **pMat, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            cout << "Mat[" << i << "][" << j << "]: ";
            cin >> pMat[i][j];
        }
    }
}

void PrintMatrix(TP **pMat, size_t rows, size_t cols) {
    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j) {
            cout << pMat[i][j] << "\t";
        }
        cout << endl;
    }
}

void DeleteMatrix(TP **&pMat, size_t rows) {
    for (size_t i = 0; i < rows; ++i) {
        delete[] pMat[i];
    }
    delete[] pMat;
    pMat = nullptr;
}

void DemoMatrix1(){
    size_t rows, cols;
     TP **pMat = nullptr;

    cout << "Demostracion de matrizes" << endl;
    cout << "Ingrese nro de filas: ";
    cin >> rows;
    cout << "Ingrese nro de columnas: ";
    cin >> cols;
    
     CreateMatrix(pMat, rows, cols);
     ReadMatrix(pMat, rows, cols);
     PrintMatrix(pMat, rows, cols);
     DeleteMatrix(pMat, rows);
}
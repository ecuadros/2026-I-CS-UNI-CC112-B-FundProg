#include "matrix.h"
#include <iostream>
using namespace std;

void CreateMatrix(TP **&pm, const size_t n, const size_t m){
    pm = new TP *[n];

    for(size_t i = 0; i < n; ++i){
        pm[i] = new TP [m];
    }
}

void ReadMatrix  (TP **pm, const size_t n, const size_t m){
    cout << "Ingrese " << n*m << " valores: " << endl;
    for(size_t i = 0; i < n; ++i){
        for(size_t j = 0; j < m; ++j){
            cin >> pm[i][j];
        }
    }
}

void PrintMatrix (TP **pm, const size_t n, const size_t m){
    for(size_t i = 0; i < n; ++i){
        for(size_t j = 0; j < m; ++j){
            cout << pm[i][j] << " ";
        }
        cout << endl;
    }
}

void DeleteMatrix(TP **&pm, const size_t n){
    for(size_t i = 0; i < n; ++i){
        delete[] pm[i];
    }
    delete[] pm;
    pm = nullptr;
};

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
    cout << endl;

    PrintMatrix(pMat, rows, cols);

    DeleteMatrix(pMat, rows);
}

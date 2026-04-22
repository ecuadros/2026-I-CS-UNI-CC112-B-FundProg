#include "matrix.h"
#include <iostream>
using namespace std;
void DemoMatrix1(){
    size_t rows, cols;
    TP **pMat = nullptr; 
    cout << "Demostracion de matrices" << endl;
    cout << "Ingrese nro de filas: ";
    cin >> rows;
    cout << "Ingrese nro de columnas: ";
    cin >> cols;
    CreateMatrix(pMat, rows, cols);
    ReadMatrix(pMat, rows, cols);
    PrintMatrix(pMat, rows, cols);
    DeleteMatrix(pMat, rows);
}
void CreateMatrix(TP** &pMat, size_t filas, size_t columnas) {
    pMat = new TP*[filas];
    for (size_t i = 0; i < filas; i++) {
        pMat[i] = new TP[columnas];
    }
}
void ReadMatrix(TP** pMat, size_t filas, size_t columnas) {
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < columnas; j++) {
            cout << "Matriz[" << i << "][" << j << "]: ";
            cin >> pMat[i][j];
        }
    }
}
void PrintMatrix(TP** pMat, size_t filas, size_t columnas) {
    for (size_t i = 0; i < filas; i++) {
        for (size_t j = 0; j < columnas; j++) {
            cout << pMat[i][j] << "\t";
        }
        cout << endl;
    }
}

void DeleteMatrix(TP** &pMat, size_t filas) {
    for (size_t i = 0; i < filas; i++) {
        delete[] pMat[i];
    }
    delete[] pMat;
    pMat = nullptr;
}

#include "matrix.h"
#include "sorting.h"


void CreateMatrix(TP **&pM, const size_t rows, const size_t cols){
    pM = new TP* [rows];

    for( auto i = 0; i < rows; ++i){
        pM[i] = new TP[cols];
    }
}

void ReadMatrix(TP **pM, const size_t rows, const size_t cols){
    cout << "Ingrese "<< rows <<" filas y"<<cols<<" columnas: ";
    for (auto i = 0; i< rows; ++i){
        for (auto j = 0; j<cols; ++j){
            cin >> pM[i][j];
        }
    }
}

void PrintMatrix(TP **pM, const size_t rows, const size_t cols){
    for (auto i = 0; i<rows; ++i){
        for (auto j=0; j<cols; j++){
            cout << pM[i][j]<<" ";
        }
        cout <<endl;
    }
}

void DeleteMatrix(TP **&pM, const size_t rows){
    if (pM == nullptr) return;

    for (size_t i = 0; i <rows; ++i){
        delete[] pM[i];
    }
    delete[] pM;
    pM = nullptr;
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

    for (auto i=0; i<rows; i++){
        BurbujaClasico(pMat[i], cols, Mayor<TP>);
    }
    PrintMatrix(pMat, rows, cols);
    cout << endl;

    for (auto i=0; i<rows; i++){
        BurbujaClasico(pMat[i], cols, Menor<TP>);
    }
    PrintMatrix(pMat, rows, cols);
    cout << endl;


    DeleteMatrix(pMat, rows);
}

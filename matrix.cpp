#include "matrix.h"
#include <iostream>
#include "sorting.h"
#include "util.h"


using namespace std;
// Crear la matriz
     void CreateMatrix(TP **&pMat, size_t rows, size_t    cols){
    pMat = new TP*[rows];
    for (size_t i = 0; i < rows; ++i){
        pMat[i] = new TP[cols];
    }
     }

     
// Leer la matriz
     void ReadMatrix(TP **pMat, size_t rows, size_t cols){
    for (size_t i = 0; i < rows; ++i){
        for (size_t  j = 0; j < cols; ++j)
            cin >> pMat[i][j];
    }
}
     

     // PrintMatrix(pMat, rows, cols);
     void PrintMatrix(TP **pMat, size_t rows, size_t cols){
        for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j){
            cout << pMat[i][j] << " ";  
         
             }
    cout << endl;
            }     

     }  
     // Eliminar la matriz
   void DeleteMatrix(TP **&pMat, size_t rows) {
    if (pMat == nullptr) return; 
    for (size_t i = 0; i < rows; ++i) {
        delete[] pMat[i]; 
    }
    delete[] pMat;       
    pMat = nullptr;
}
// Ordenamiento por filas
void BurbujaClasicoFilas(TP **pMat, size_t rows, size_t cols, bool (*cmp)(TP, TP)){
    for (size_t i = 0; i < rows; ++i){
        for (size_t j = 0; j < cols - 1; ++j){
            for (size_t k = 0; k < cols - j - 1; ++k){
                if (cmp(pMat[i][k], pMat[i][k + 1])){
                    swap(pMat[i][k], pMat[i][k + 1]);
                }
            }
        }
    }
} 
// Ordenamiento por columnas
void BurbujaClasicoColumnas(TP **pMat, size_t rows, size_t cols, bool (*cmp)(TP, TP)){
    for (size_t j = 0; j < cols; ++j){
        for (size_t i = 0; i < rows - 1; ++i){
            for (size_t k = 0; k < rows - i - 1; ++k){
                if (cmp(pMat[k][j], pMat[k + 1][j])){
                    swap(pMat[k][j], pMat[k + 1][j]);
                }
            }
        }
    }
} 
void DemoMatrix1(){
    TP **pMat = nullptr;
    size_t rows=0, cols=0;

    cout << "Ingrese el numero de filas : ";
    cin >> rows ;
    cout << "Ingrese el numero de columnas: ";    
    cin >> cols;

   CreateMatrix(pMat, rows, cols);

  cout << "Ingrese los elementos de la matriz: " << endl;
   ReadMatrix(pMat, rows, cols);   


 cout << "La matriz ingresada es: " << endl;
    PrintMatrix(pMat, rows, cols);


cout << endl;

//Ordenamiento por filas 
//Ordenar la matriz usando el algoritmo de burbuja clasico
cout<< "Matriz ordenada de mayor a menor: " << endl;

  BurbujaClasicoFilas(pMat, rows, cols, Mayor<TP>);
    PrintMatrix(pMat, rows, cols);

cout << endl;

cout << "Matriz ordenada de menor a mayor: " << endl;

BurbujaClasicoFilas(pMat, rows, cols, Menor<TP>);
    PrintMatrix(pMat, rows, cols);

//Por columnas
cout << endl;

cout << "Matriz ordenada por columnas de mayor a menor: " << endl;  
BurbujaClasicoColumnas(pMat, rows, cols, Mayor<TP>);
PrintMatrix(pMat, rows, cols);
cout << endl;   


cout << "Matriz ordenada por columnas de menor a mayor: " << endl;
BurbujaClasicoColumnas(pMat, rows, cols, Menor<TP>);    
PrintMatrix(pMat, rows, cols);
cout << endl;

    DeleteMatrix(pMat, rows);
}

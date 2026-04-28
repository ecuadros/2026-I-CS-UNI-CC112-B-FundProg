#include "matrix.h"
#include <iostream>
#include <fstream> // ofstream,, ifstream

using namespace std;
using TS = string;

void DemoMatrix1(){
    /*
    size_t rows, cols;
    TP **pMat = nullptr;
    
    cout << "Demostracion de matrizes" << endl;
    cout << "Ingrese nro de filas: ";
    cin >> rows;
    cout << "Ingrese nro de columnas: ";
    cin >> cols;
    
    CreateMatrix(pMat, rows, cols);
    ReadMatrix(pMat, rows, cols, cout, cin);
    //Imprimiendo en terminal
    PrintMatrix(pMat, rows, cols, cout);
    
    //Imprimiendo en archivo txt
    ofstream ofs("matriz1.txt");
    PrintMatrix(pMat, rows, cols, ofs);
    //Utilzamos .close() para cerrar y "save" el archivo, para 
    //luego volver abrirlo para leer o volver ingresar contenido
    ofs.close();
    
    DeleteMatrix(pMat, rows);

    //Ejercicio: Leer matriz, luego aumentar 1 a cada elemento.
    //Finalmente guardar en un archivo de texto.
    ofstream Null("NUL");
    ifstream ifs("matriz1.txt");
    TP **pMat2 = nullptr;
    ifs >> rows >> cols;
    CreateMatrix(pMat2, rows, cols);

    cout<<"Leyendo -matriz1.txt- para pMat2"<<endl;
    //En el caso del profesor utilizo "cerr", imprimiendolo en el
    //terminal de errores
    ReadMatrix(pMat2, rows, cols, Null, ifs);
    ifs.close();

    TransformarMatriz(pMat2, rows, cols);
    ofstream ofs2("matriz2.txt");
    cout<<"Imprimiendo nueva matriz en -matriz2.txt-"<<endl;
    PrintMatrix(pMat2, rows, cols, ofs2);
    ofs2.close();

    DeleteMatrix(pMat2, rows);
    */
    /*
    //Ejercicio: Ingresar un texto e imprimirlo en un archivo.txt
    TS **pMtexto = nullptr;
    size_t t_rows, t_cols;
    cout << "Ingrese nro de filas: ";
    cin >> t_rows;
    cout << "Ingrese nro de columnas: ";
    cin >> t_cols;

    CreateMatrix(pMtexto, t_rows, t_cols);
    ReadMatrix(pMtexto, t_rows, t_cols, cout, cin);
    ofstream ofsT("matrizTexto.txt");
    PrintMatrix(pMtexto, t_rows, t_cols, ofsT);
    ofsT.close();
    DeleteMatrix(pMtexto, t_rows);
    */

    //Ejercicio: Leer una 2 matrices de 2 textos distintos, multiplicarlos
    //e imprimirlo en un matriz3.txt

    //Leyendo primera matriz
    TP **pMat3 = nullptr;
    size_t row3, col3;

    ofstream Nulo("NUL");
    ifstream ifs3("matriz1.txt");
    ifs3 >> row3 >> col3;
    CreateMatrix(pMat3, row3, col3);

    cout<<"Leyendo -matriz1.txt- para pMat3"<<endl;
    ReadMatrix(pMat3, row3, col3, Nulo, ifs3);

    //Leyendo Segunda matriz
    TP **pMat4 = nullptr;
    size_t row4, col4;

    ifstream ifs4("matriz2.txt");
    ifs4 >> row4 >> col4;
    CreateMatrix(pMat4, row4, col4);

    cout<<"Leyendo -matriz2.txt- para pMat4"<<endl;
    ReadMatrix(pMat4, row4, col4, Nulo, ifs4);

    //Verificando la condicion para el producto de matrices
    if(col3 != row4){
        cout<<"Producto de Matrices imposible de aplicar."<<endl;
        return;
    }
    
    TP **pMatProd = nullptr;
    size_t rowProd = row3, colProd = col4, ind = row4;
    CreateMatrix(pMatProd, rowProd, colProd);

    cout<<"Aplicando Producto de matrices y escribiendo en -matrizProd.txt-"<<endl;
    productoMatriz(pMat3, row3, pMat4, col4, pMatProd, ind);
    ofstream ofsP("matrixProducto.txt");
    PrintMatrix(pMatProd, rowProd, colProd, ofsP);

    DeleteMatrix(pMat3, row3);
    DeleteMatrix(pMat4, row4);
    DeleteMatrix(pMatProd, rowProd);

}

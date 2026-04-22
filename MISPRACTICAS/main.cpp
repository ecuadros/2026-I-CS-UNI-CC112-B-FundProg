#include <iostream>
#include "util.h"

using namespace std;

int main() {

    //PROBANDO PREGUNTA 2
    cout << "--- PREGUNTA 2: BURBUJA ---" << endl;
    T1 v_int[] = {9, 3, 1, 7, 5};
    burbuja_rec<T1>(v_int, 5, Mayor);
    cout << "Enteros ordenados: ";
    for(T1 i=0; i<5; i++) cout << v_int[i] << " ";
    cout << "\n\n";

//PROBANDO PREGUNTA 4 
    cout << "--- PREGUNTA 4: REPARTO ---" << endl;
    T1 pedidos[] = {5, 8, 6, 4, 7, 5, 3, 6};
    T1 n = 8;
    T1 camiones = 5;
    T1 res = repartirPedidos(pedidos, n, camiones);
    cout << "Capacidad minima optimizada: " << res << endl;

    return 0;
}
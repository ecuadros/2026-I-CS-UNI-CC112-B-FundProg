#ifndef __UTIL_H__
#define __UTIL_H__
#include "types.h"

//PREGUNTA 2
template <typename T>
bool Mayor(T a, T b) { return a > b; }

template <typename T>
bool Menor(T a, T b) { return a < b; }

template <typename T>
void burbuja_rec(T* arr, T1 n, bool (*comp)(T, T)) {
    if (n <= 1) return;
    for (T1 i = 0; i < n - 1; i++) {
        if (comp(arr[i], arr[i + 1])) {
            T temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    burbuja_rec(arr, n - 1, comp);
}

// PREGUNTA 4
bool esPosible(T1* pedidos, T1 n, T1 camiones, T1 cap);
T1 repartirPedidos(T1* pedidos, T1 n, T1 maxCamiones);

#endif
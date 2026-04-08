#ifndef __SORTING_H__
#define __SORTING_H__
#include <iostream>
#include "types.h"
// #include "compareFunc.h"
using namespace std;
using ContainerRange    = int;

template <typename Q, typename R> 
void Test(Q q, R r, string s, Q *pQ, R *pR){
    cout << q << " " << r << endl;
    cout << s << endl;
    cout << *pQ << " " << *pR << endl;
}

template <typename Q, typename R> 
auto suma(Q q, R r){
    return q + r;
}

template <typename T> 
void intercambiar(T& a, T& b){
    T temp = a;
    a = b;
    b = temp;
}

template <typename T> 
void PrintArray(T arr[], ContainerRange n){
    for (auto i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// Videos: https://www.youtube.com/watch?v=ZZuD6iUe3Pc
// Bubble 
template <typename T, typename Func> 
void BurbujaClasico(T arr[], ContainerRange n, Func func) {
    if (n <= 1)
        return;
    for (auto i = 0; i < n - 1; ++i)
        for (auto j = i+1; j < n; ++j)
            if( func(arr[i], arr[j]) )
                intercambiar(arr[i], arr[j]);
}

// Bubble
template <typename T, typename Func> 
void BurbujaRecursivo(T arr[], ContainerRange n, Func func) {
    if (n <= 1)
        return;
    for (auto j = 1; j < n; ++j)
        if ( func(arr[j], arr[0]) )
            intercambiar(arr[0], arr[j]);
    BurbujaRecursivo(arr+1, n-1, func);
}
void DemoBurbuja();

// QuickSort

template<typename T, typename Func>
ContainerRange particionar(T arr[], ContainerRange first, ContainerRange
last, Func pComp) {
    auto pivote = arr[last];  // Pivote es el elemento de referencia
    auto i = (first - 1);

    for (auto j = first; j <= last - 1; j++) {
        if (arr[j] == pivote) ++i;
        if ( pComp(pivote, arr[j]) ){
            ++i; intercambiar(arr[i], arr[j]);
        }
    }
    intercambiar(arr[i + 1], arr[last]);
    return (i + 1);
}


template <typename T, typename Func>
void QuickSort(T arr, ContainerRange first, ContainerRange last, Func pComp) {
    if (first < last) {
        auto pi = particionar(arr, first, last, pComp);
        QuickSort(arr, first, pi - 1, pComp);
        QuickSort(arr, pi + 1, last, pComp);
    }
}
void DemoQuickSort();

//MergeSort

template<typename T, typename Func>
void Merge(T arr[], const ContainerRange left,
                                   const ContainerRange mid,
                                   const ContainerRange right,
                                   Func pComp) {
    auto const subArrayOne = mid - left + 1;
    auto const subArrayTwo = right - mid;

    // Crear arrays temporales
    auto *leftArray = new T1[subArrayOne],
         *rightArray = new T1[subArrayTwo];

    // Copiar datos a los arrays temporales leftArray[] y rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = arr[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = arr[mid + 1 + j];

    auto indexOfSubArrayOne = 0, // Índice inicial del primer sub-array
        indexOfSubArrayTwo = 0; // Índice inicial del segundo sub-array
    ContainerRange indexOfMergedArray = left; // Índice inicial del array

    //Mezclar los arrays temporales de vuelta a arr[left..right]
    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo <
    subArrayTwo) {
        if ( (*pComp)(rightArray[indexOfSubArrayTwo],
        leftArray[indexOfSubArrayOne])  ) {
            arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        } else {
            arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
    // Copiar los elementos restantes de left[], si los hay
    while (indexOfSubArrayOne < subArrayOne) {
        arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
    // Copiar los elementos restantes de right[], si los hay
    while (indexOfSubArrayTwo < subArrayTwo) {
        arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }

    delete[] leftArray;
    delete[] rightArray;
}
template<typename T, typename Func>
void MergeSort( T arr[],
                ContainerRange const begin,
                ContainerRange const end,
                Func pComp) {
    if (begin >= end)
        return; // Return recursivamente

    auto mid = begin + (end - begin) / 2;
    MergeSort(arr, begin, mid, pComp);
    MergeSort(arr, mid + 1, end, pComp);
    Merge(arr, begin, mid, end, pComp);
}
void DemoMergeSort();

void DemoSorting();

#endif // __SORTING_H__
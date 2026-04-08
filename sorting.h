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

// Funcion intercambiar
template <typename T> 
void intercambiar(T &a, T &b){
    T temp = a; 
    a = b;
    b = temp;
}

//Funcion para imprimir un array
template <typename T> 
void PrintArray(T arr[], ContainerRange n){
    for (auto i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

// Búsqueda Binaria recursiva
template <typename T, typename Func> 
ContainerRange BinarySearch(T arr[], ContainerRange first, ContainerRange last, 
                            T elem, Func func){
    if (first > last)
        return -1;
    auto mid = first + (last - first) / 2;
    if (arr[mid] == elem)
        return mid;
    if ( func(elem, arr[mid]) )
        return BinarySearch(arr, mid + 1, last, elem, func);
    return BinarySearch(arr, first, mid - 1, elem, func);
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

// Partición para QuickSort
template <typename T1, typename CompFunc>
 ContainerRange particionar(T1* arr, ContainerRange first, ContainerRange
 last, CompFunc pComp) {
     auto pivote = arr[last];  // Pivote es el elemento de referencia
     auto i = (first - 1);
    for (auto j = first; j <= last - 1; j++) {
        if (arr[j] == pivote) ++i;
         if ( (*pComp)(arr[j], pivote) ){
             ++i; intercambiar(arr[i], arr[j]);
         }
     }
    intercambiar(arr[i + 1], arr[last]);
     return (i + 1);
 }

//QuickSort
 template <typename T1, typename CompFunc>
 void QuickSort(T1* arr, ContainerRange first, ContainerRange last, CompFunc
 pComp) {
    if (first < last) {
        auto pi = particionar(arr, first, last, pComp);
         QuickSort(arr, first, pi - 1, pComp);
        QuickSort(arr, pi + 1, last, pComp);
     }
 }
void DemoQuickSort();

// Merge
template <typename T1, typename CompFunc>
void Merge(T1* arr, const ContainerRange left,
    const ContainerRange mid,const ContainerRange right, CompFunc pComp) {
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
     ContainerRange indexOfMergedArray = left;  // Índice inicial del array mezclado

// Mezclar los arrays temporales de vuelta a arr[left..right]
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

// left es para el índice izquierdo y right es para el índice derecho del
// sub-array de arr a ordenar
// MergeSort
template <typename T1, typename CompFunc>
 void MergeSort( T1* arr,ContainerRange const begin,
    ContainerRange const end, CompFunc pComp) {
     if (begin >= end)
         return; // Return recursivamente

     auto mid = begin + (end - begin) / 2;
     MergeSort(arr, begin, mid, pComp);
     MergeSort(arr, mid + 1, end, pComp);
     Merge(arr, begin, mid, end, pComp);
 }
void DemoMergeSort();

// ContainerRange  particionar(ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void QuickSort  (ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void DemoQuickSort();

// void Merge(ContainerElemType1* arr, const ContainerRange left, const ContainerRange mid, const ContainerRange right, CompFunc pComp); 
// void MergeSort(ContainerElemType1* arr, const ContainerRange begin, const ContainerRange end, CompFunc pComp);
// void DemoMergeSort();

void DemoSorting();
void DemoSearch();

#endif // __SORTING_H__
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

// ContainerRange  particionar(ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void QuickSort  (ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp);

template <typename T1, typename ContainerRange, typename CompFunc >
void QuickSort(T1* arr, ContainerRange first, ContainerRange last, CompFunc, pComp);

void DemoQuickSort();
// void Merge(ContainerElemType1* arr, const ContainerRange left, const ContainerRange mid, const ContainerRange right, CompFunc pComp); 
// void MergeSort(ContainerElemType1* arr, const ContainerRange begin, const ContainerRange end, CompFunc pComp);

template <typename T1, typename ContainerRange, typename CompFunc >
void MergeSort( T1* arr, ContainerRange const begin, ContainerRange const end, CompFunc Pcomp);


void DemoMergeSort();

void DemoSorting();


#include "sorting.cpp"

#endif // __SORTING_H__
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


template <typename T, typename Func> 
void QuickSort (T arr[], ContainerRange first, ContainerRange last, Func func) {
    if (first >= last)
        return;
    auto pivot = particionar(arr, first, last, func);
    QuickSort(arr, first, pivot - 1, func);
    QuickSort(arr, pivot + 1, last, func);
}

void DemoQuickSort();

template <typename T, typename Func>
void Merge (T arr[], const ContainerRange left, const ContainerRange mid, const ContainerRange right, Func func) {
    auto n1 = mid - left + 1;
    auto n2 = right - mid;

    T* L = new T[n1];
    T* R = new T[n2];

    for (auto i = 0; i < n1; ++i)
        L[i] = arr[left + i];
    for (auto j = 0; j < n2; ++j)
        R[j] = arr[mid + 1 + j];

    auto i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if ( func(L[i], R[j]) )
            arr[k] = L[i];
            i++;
        else
            arr[k] = R[j]; j++;
        k++;
    } 

    while (i < n1)
        arr[k] = L[i]; i++:k++;
    while (j < n2)
        arr[k] = R[j]; j++:k++;

    delete[] L;
    delete[] R;
}

template <typename T, typename Func>
void MergeSort (T arr[], const ContainerRange begin, const ContainerRange end, Func func) {
    if (begin >= end)
        return;
    auto mid = begin + (end - begin) / 2;
    MergeSort(arr, begin, mid, func);
    MergeSort(arr, mid + 1, end, func);
    Merge(arr, begin, mid, end, func);
}

void DemoMergeSort();



// ContainerRange  particionar(ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void QuickSort  (ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp);
// void DemoQuickSort();

// void Merge(ContainerElemType1* arr, const ContainerRange left, const ContainerRange mid, const ContainerRange right, CompFunc pComp); 
// void MergeSort(ContainerElemType1* arr, const ContainerRange begin, const ContainerRange end, CompFunc pComp);
// void DemoMergeSort();

void DemoSorting();

#endif // __SORTING_H__
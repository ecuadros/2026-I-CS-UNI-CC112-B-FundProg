#ifndef __SORTING_H__
#define __SORTING_H__

#include <iostream>
#include "types.h"

// --- LÓGICA DE MERGE SORT ---
template <typename T, typename Range, typename CompFunc>
void Merge(T* arr, Range begin, Range mid, Range end, CompFunc pComp) {
    Range n1 = mid - begin + 1;
    Range n2 = end - mid;
    T* L = new T[n1];
    T* R = new T[n2];
    for (Range i = 0; i < n1; i++) L[i] = arr[begin + i];
    for (Range j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];
    Range i = 0, j = 0, k = begin;
    while (i < n1 && j < n2) {
        if (pComp(L[i], R[j])) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
    delete[] L;
    delete[] R;
}

template <typename T, typename Range, typename CompFunc>
void MergeSort(T* arr, Range begin, Range end, CompFunc pComp) {
    if (begin >= end) return;
    Range mid = begin + (end - begin) / 2;
    MergeSort(arr, begin, mid, pComp);
    MergeSort(arr, mid + 1, end, pComp);
    Merge(arr, begin, mid, end, pComp);
}

// --- LÓGICA DE QUICK SORT (Lo que faltaba) ---
template <typename T, typename Range, typename CompFunc>
Range Partition(T* arr, Range low, Range high, CompFunc pComp) {
    T pivot = arr[high];
    Range i = (low - 1);
    for (Range j = low; j <= high - 1; j++) {
        if (pComp(arr[j], pivot)) {
            i++;
            T temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    T temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}

template <typename T, typename Range, typename CompFunc>
void QuickSort(T* arr, Range low, Range high, CompFunc pComp) {
    if (low < high) {
        Range pi = Partition(arr, low, high, pComp);
        QuickSort(arr, low, pi - 1, pComp);
        QuickSort(arr, pi + 1, high, pComp);
    }
}

#endif 
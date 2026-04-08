#include <iostream>
#include "util.h"
#include "types.h"
#include "sorting.h"

using namespace std;

void DemoMergeSort() {
    T1 arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
    ContainerRange n = sizeof(arr) / sizeof(arr[0]);

    cout << "--- PRUEBA MERGE SORT ---" << endl;
    MergeSort(arr, 0, n - 1, Menor);
    cout << "Ascendente: "; PrintArray(arr, n, cout);

    // --- PRUEBA QUICK SORT ---
    T1 arr2[] = {10, 7, 8, 9, 1, 5};
    ContainerRange n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "\n--- PRUEBA QUICK SORT ---" << endl;
    QuickSort(arr2, 0, n2 - 1, Mayor); // Probamos descendente
    cout << "Descendente: "; PrintArray(arr2, n2, cout);
    
    cout << endl;
}

    // BurbujaRecursivo(arr, n, &Menor);
    // cout << "Array ordenado Descendente:\n";
    // PrintArray(arr, 10, cout);

    // cout << endl;

// ContainerRange particionar(ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp) {
//     auto pivote = arr[last];  // Pivote es el elemento de referencia
//     auto i = (first - 1);

//     for (auto j = first; j <= last - 1; j++) {
//         if (arr[j] == pivote) ++i;
//         if ( (*pComp)(arr[j], pivote) ){
//             ++i; intercambiar(arr[i], arr[j]);
//         }
//     }
//     intercambiar(arr[i + 1], arr[last]);
//     return (i + 1);
// }


//     void QuickSort(ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp) {
//     if (first < last) {
//         auto pi = particionar(arr, first, last, pComp);
//         QuickSort(arr, first, pi - 1, pComp);
//         QuickSort(arr, pi + 1, last, pComp);
//     }
// }

// void DemoQuickSort() {
//     cout << "DemoQuickSort \n";
//     ContainerElemType1 arr[] = {5, 2, 8, 15, 1, 9, 4, 7, 3, 6};
//     auto n = sizeof(arr) / sizeof(arr[0]);

//     QuickSort(arr, 0, n - 1, &Mayor);
//     cout << "Arreglo ordenado Ascendente: \n";
//     PrintArray(arr, n, cout);

//     QuickSort(arr, 0, n - 1, &Menor);    
//     cout << "Arreglo ordenado Descendente: \n";
//     PrintArray(arr, n, cout);

//     cout << endl;
// }

// // Función para mezclar dos subarreglos ordenados de arr[].
// void Merge(ContainerElemType1* arr, const ContainerRange left, 
//                                    const ContainerRange mid, 
//                                    const ContainerRange right, 
//                                    CompFunc pComp) {
//     auto const subArrayOne = mid - left + 1;
//     auto const subArrayTwo = right - mid;

//     // Crear arrays temporales
//     auto *leftArray = new ContainerElemType1[subArrayOne],
//          *rightArray = new ContainerElemType1[subArrayTwo];

//     // Copiar datos a los arrays temporales leftArray[] y rightArray[]
//     for (auto i = 0; i < subArrayOne; i++)
//         leftArray[i] = arr[left + i];
//     for (auto j = 0; j < subArrayTwo; j++)
//         rightArray[j] = arr[mid + 1 + j];

//     auto indexOfSubArrayOne = 0, // Índice inicial del primer sub-array
//         indexOfSubArrayTwo = 0; // Índice inicial del segundo sub-array
//     ContainerRange indexOfMergedArray = left; // Índice inicial del array mezclado

//     // Mezclar los arrays temporales de vuelta a arr[left..right]
//     while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
//         if ( (*pComp)(rightArray[indexOfSubArrayTwo], leftArray[indexOfSubArrayOne])  ) {
//             arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//             indexOfSubArrayOne++;
//         } else {
//             arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//             indexOfSubArrayTwo++;
//         }
//         indexOfMergedArray++;
//     }
//     // Copiar los elementos restantes de left[], si los hay
//     while (indexOfSubArrayOne < subArrayOne) {
//         arr[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//         indexOfSubArrayOne++;
//         indexOfMergedArray++;
//     }
//     // Copiar los elementos restantes de right[], si los hay
//     while (indexOfSubArrayTwo < subArrayTwo) {
//         arr[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//         indexOfSubArrayTwo++;
//         indexOfMergedArray++;
//     }

//     delete[] leftArray;
//     delete[] rightArray;
// }

// // left es para el índice izquierdo y right es para el índice derecho del
// // sub-array de arr a ordenar
// void MergeSort( ContainerElemType1* arr, 
//                 ContainerRange const begin, 
//                 ContainerRange const end,
//                 CompFunc pComp) {
//     if (begin >= end)
//         return; // Return recursivamente

//     auto mid = begin + (end - begin) / 2;
//     MergeSort(arr, begin, mid, pComp);
//     MergeSort(arr, mid + 1, end, pComp);
//     Merge(arr, begin, mid, end, pComp);
// }

// void DemoMergeSort(){
//     cout << "DemoMergeSort" << endl;
//     ContainerElemType1 arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
//     auto n = sizeof(arr) / sizeof(arr[0]);

//     MergeSort(arr, 0, n-1, &Mayor);
//     cout << "Array ordenado Ascendente:\n";
//     PrintArray(arr, n, cout);

//     MergeSort(arr, 0, n-1, &Menor);
//     cout << "Array ordenado Descendente:\n";
//     PrintArray(arr, n, cout);

//     cout << endl;
// }

// void DemoSorting(){
   // DemoBurbuja();
    // QuickSort añadido
    // DemoQuickSort();

    // DemoMergeSort();
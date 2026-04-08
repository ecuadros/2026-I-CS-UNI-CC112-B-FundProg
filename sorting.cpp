<<<<<<< HEAD
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
=======
#include "sorting.h"
#include "util.h"
#include <iostream>
// #include "array.h"

using namespace std;

void DemoBurbuja() {
  cout << "DemoBurbuja \n";

  cout << "BurbujaClasico \n";
  T1 arr1[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
  auto n1 = sizeof(arr1) / sizeof(arr1[0]);

  PrintArray(arr1, n1);
  BurbujaClasico(arr1, n1, Mayor<T1>);
  PrintArray(arr1, n1);
  BurbujaClasico(arr1, n1, Menor<T1>);
  PrintArray(arr1, n1);

  cout << "BurbujaRecursivo \n";
  T1 arr2[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
  auto n2 = sizeof(arr2) / sizeof(arr2[0]);

  PrintArray(arr2, n2);
  BurbujaRecursivo(arr2, n2, Mayor<T1>);
  PrintArray(arr2, n2);
  BurbujaRecursivo(arr2, n2, Menor<T1>);
  PrintArray(arr2, n2);

  T2 arr3[] = {5.2, 7.5, 8.1, 1.9, 8.9, 9.1, 4.4, 7.7, 3.3, 6.6};
  auto n3 = sizeof(arr3) / sizeof(arr3[0]);
  BurbujaRecursivo(arr3, n3, Mayor<T2>);
  cout << "Array ordenado Ascendente:\n";
  PrintArray(arr3, n3);
  BurbujaRecursivo(arr3, n3, Menor<T2>);
  cout << "Array ordenado Descendente:\n";
  PrintArray(arr3, n3);

  string arr4[] = {"Hola", "Mundo", "Adios", "Mundo"};
  auto n4 = sizeof(arr4) / sizeof(arr4[0]);
  BurbujaRecursivo(arr4, n4, Mayor<string>);
  cout << "Array ordenado Ascendente:\n";
  PrintArray(arr4, n4);
  BurbujaRecursivo(arr4, n4, &Menor<string>);
  cout << "Array ordenado Descendente:\n";
  PrintArray(arr4, n4);

  // BurbujaRecursivo(arr, n, &Menor);
  // cout << "Array ordenado Descendente:\n";
  // PrintArray(arr, 10, cout);

  // cout << endl;
  int a = 3;
  double b = 3.14;
  auto x = suma(a, b);
  cout << x << endl;

  string str1 = "Fund", str2 = "Prog";
  auto str3 = suma(str1, str2);
  cout << str3 << endl;

  //     string str3 = "CS-UNI";
  //     auto str4 = suma(str3, 7.7);
  //     cout << str4 << endl;
}

// ContainerRange particionar(T1* arr, ContainerRange first, ContainerRange
// last, CompFunc pComp) {
>>>>>>> upstream/09-sorting
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

<<<<<<< HEAD

//     void QuickSort(ContainerElemType1* arr, ContainerRange first, ContainerRange last, CompFunc pComp) {
=======
// void QuickSort(T1* arr, ContainerRange first, ContainerRange last, CompFunc
// pComp) {
>>>>>>> upstream/09-sorting
//     if (first < last) {
//         auto pi = particionar(arr, first, last, pComp);
//         QuickSort(arr, first, pi - 1, pComp);
//         QuickSort(arr, pi + 1, last, pComp);
//     }
// }

<<<<<<< HEAD
// void DemoQuickSort() {
//     cout << "DemoQuickSort \n";
//     ContainerElemType1 arr[] = {5, 2, 8, 15, 1, 9, 4, 7, 3, 6};
//     auto n = sizeof(arr) / sizeof(arr[0]);
=======
void DemoQuickSort() {
    cout << "DemoQuickSort \n";
    T1 arr[] = {5, 2, 8, 15, 1, 9, 4, 7, 3, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
>>>>>>> upstream/09-sorting

//     QuickSort(arr, 0, n - 1, &Mayor);
//     cout << "Arreglo ordenado Ascendente: \n";
//     PrintArray(arr, n, cout);

<<<<<<< HEAD
//     QuickSort(arr, 0, n - 1, &Menor);    
=======
//     QuickSort(arr, 0, n - 1, &Menor);
>>>>>>> upstream/09-sorting
//     cout << "Arreglo ordenado Descendente: \n";
//     PrintArray(arr, n, cout);

//     cout << endl;
<<<<<<< HEAD
// }

// // Función para mezclar dos subarreglos ordenados de arr[].
// void Merge(ContainerElemType1* arr, const ContainerRange left, 
//                                    const ContainerRange mid, 
//                                    const ContainerRange right, 
=======
}

// // Función para mezclar dos subarreglos ordenados de arr[].
// void Merge(T1* arr, const ContainerRange left,
//                                    const ContainerRange mid,
//                                    const ContainerRange right,
>>>>>>> upstream/09-sorting
//                                    CompFunc pComp) {
//     auto const subArrayOne = mid - left + 1;
//     auto const subArrayTwo = right - mid;

//     // Crear arrays temporales
<<<<<<< HEAD
//     auto *leftArray = new ContainerElemType1[subArrayOne],
//          *rightArray = new ContainerElemType1[subArrayTwo];
=======
//     auto *leftArray = new T1[subArrayOne],
//          *rightArray = new T1[subArrayTwo];
>>>>>>> upstream/09-sorting

//     // Copiar datos a los arrays temporales leftArray[] y rightArray[]
//     for (auto i = 0; i < subArrayOne; i++)
//         leftArray[i] = arr[left + i];
//     for (auto j = 0; j < subArrayTwo; j++)
//         rightArray[j] = arr[mid + 1 + j];

//     auto indexOfSubArrayOne = 0, // Índice inicial del primer sub-array
//         indexOfSubArrayTwo = 0; // Índice inicial del segundo sub-array
<<<<<<< HEAD
//     ContainerRange indexOfMergedArray = left; // Índice inicial del array mezclado

//     // Mezclar los arrays temporales de vuelta a arr[left..right]
//     while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
//         if ( (*pComp)(rightArray[indexOfSubArrayTwo], leftArray[indexOfSubArrayOne])  ) {
=======
//     ContainerRange indexOfMergedArray = left; // Índice inicial del array
//     mezclado

//     // Mezclar los arrays temporales de vuelta a arr[left..right]
//     while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo <
//     subArrayTwo) {
//         if ( (*pComp)(rightArray[indexOfSubArrayTwo],
//         leftArray[indexOfSubArrayOne])  ) {
>>>>>>> upstream/09-sorting
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
<<<<<<< HEAD
// void MergeSort( ContainerElemType1* arr, 
//                 ContainerRange const begin, 
=======
// void MergeSort( T1* arr,
//                 ContainerRange const begin,
>>>>>>> upstream/09-sorting
//                 ContainerRange const end,
//                 CompFunc pComp) {
//     if (begin >= end)
//         return; // Return recursivamente

//     auto mid = begin + (end - begin) / 2;
//     MergeSort(arr, begin, mid, pComp);
//     MergeSort(arr, mid + 1, end, pComp);
//     Merge(arr, begin, mid, end, pComp);
// }

<<<<<<< HEAD
// void DemoMergeSort(){
//     cout << "DemoMergeSort" << endl;
//     ContainerElemType1 arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
//     auto n = sizeof(arr) / sizeof(arr[0]);
=======
void DemoMergeSort(){
    cout << "DemoMergeSort" << endl;
    T1 arr[] = {5, 2, 8, 1, 15, 9, 4, 7, 3, 6};
    auto n = sizeof(arr) / sizeof(arr[0]);
>>>>>>> upstream/09-sorting

//     MergeSort(arr, 0, n-1, &Mayor);
//     cout << "Array ordenado Ascendente:\n";
//     PrintArray(arr, n, cout);

//     MergeSort(arr, 0, n-1, &Menor);
//     cout << "Array ordenado Descendente:\n";
//     PrintArray(arr, n, cout);

<<<<<<< HEAD
//     cout << endl;
// }

// void DemoSorting(){
   // DemoBurbuja();
    // QuickSort añadido
    // DemoQuickSort();

    // DemoMergeSort();
=======
    cout << endl;
}

void DemoSorting() {
    DemoBurbuja();
    DemoQuickSort();
    DemoMergeSort();
}
>>>>>>> upstream/09-sorting

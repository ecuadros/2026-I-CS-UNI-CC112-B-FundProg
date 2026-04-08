#ifndef __UTIL_H__
#define __UTIL_H__
<<<<<<< HEAD

#include "types.h"
#include <iostream>

// Prototipos de Fibonacci y Factorial
UTT1 fib_rec(UT1 n);
UTT1 fib_iter(UT1 n);
UTT1 fact_rec(UT1 n);
UTT1 fact_iter(UT1 n);

void DemoUtil();

// DECLARACIÓN DE PRINTARRAY
void PrintArray(T1* arr, ContainerRange n, std::ostream& out);

#endif  
=======
#include "types.h"

UTT1 fib_rec  (UT1 n);
UTT1 fib_iter (UT1 n);
UTT1 fact_rec (UT1 n);
UTT1 fact_iter(UT1 n);

template <typename T>
bool Mayor(T a, T b){
    return a > b;
}

template <typename T>
bool Menor(T a, T b){
    return a < b;
}

void DemoUtil();

#endif // __UTIL_H__
>>>>>>> upstream/09-sorting

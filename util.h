#ifndef __UTIL_H__
#define __UTIL_H__

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
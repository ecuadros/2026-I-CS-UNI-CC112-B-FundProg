#ifndef __UTIL_H__
#define __UTIL_H__
#include "types.h"

TT1 fib_rec  (UT1 n);
TT1 fib_iter (UT1 n);
TT1 fact_rec (UT1 n);
TT1 fact_iter(UT1 n);

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

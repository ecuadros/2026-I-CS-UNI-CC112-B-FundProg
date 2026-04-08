#include "util.h"
#include <iostream>

using namespace std;

// ESTO ES LO QUE EL LINKER NO ENCONTRABA:
void PrintArray(T1* arr, ContainerRange n, ostream& out) {
    for (ContainerRange i = 0; i < n; i++) {
        out << arr[i] << " ";
    }
    out << endl;
}

UTT1 fib_rec(UT1 n) {
    if (n < 2) return n;
    return fib_rec(n - 1) + fib_rec(n - 2);
}

UTT1 fib_iter(UT1 n) {
    UTT1 a = 0, b = 1, c;
    if (n == 0) return a;
    for (UT1 i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

UTT1 fact_rec(UT1 n) {
    if (n == 0) return 1;
    return n * fact_rec(n - 1);
}

UTT1 fact_iter(UT1 n) {
    UTT1 res = 1;
    for (UT1 i = 1; i <= n; i++) res *= i;
    return res;
}

void DemoUtil() {
    cout << "Ejecutando DemoUtil..." << endl;
} 

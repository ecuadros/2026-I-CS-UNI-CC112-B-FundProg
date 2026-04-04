#include "arit.h"
#include <iostream>

T1 suma(T1 a, T1 b) { return a + b; }
T1 resta(T1 a, T1 b) { return a - b; }
T1 producto(T1 a, T1 b) { return a * b; }

void DemoAritmetica() {
    T1 a = 50.4;
    T1 b = 20.2;
    
    std::cout << suma(a, b) << std::endl;
    std::cout << resta(a, b) << std::endl;
    std::cout << producto(a, b) << std::endl;
}
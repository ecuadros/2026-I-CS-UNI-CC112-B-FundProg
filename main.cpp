#include <iostream> // cout 
#include "arit.h"   // suma, resta

// g++ -std=c++2b main.cpp arit.cpp -o main
// El main() debe ser muy pero muy pequeñito
int main() { 
    std::cout << "Hello FundProg-UNI!" << std::endl;
    
    int a = 2.4;
    int b = 7.8;
    int c = suma(a, b);
    std::cout << c << std::endl;
    //std::cout << "La suma de " << a << " y " << b << " es " << c << std::endl;

    c = resta(a, b);
    std::cout << c << std::endl;

    c= multiplicacion(a,b);
    std::cout << c << std::endl;

    return 0;
}
#include <iostream> // cout 
#include "arit.h"   // suma, resta

// g++ -std=c++2b main.cpp arit.cpp -o main
// El main() debe ser muy pero muy pequeñito
int main() {
    std::cout << "Hello FundProg-UNI!" << std::endl;
    
    T1 a = 50.4;
    T1 b = 20.2;
    T1 c = suma(a, b);
    std::cout << c << std::endl;
    //std::cout << "La suma de " << a << " y " << b << " es " << c << std::endl;
    c = resta(a, b);
    std::cout << c << std::endl;
    //std::cout << "La resta de " << a << " y " << b << " es " << c << std::endl;
    
    c = producto(a, b);
    std::cout << c << std::endl;
    //std::cout << "El producto de " << a << " y " << b << " es " << c << std::endl;

    return 0;
}
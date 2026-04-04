#include <iostream>
#include "arit.h"
#include "types.h"

int main() {
    T1 a = 50.4; 
    T1 b = 20.2;
    T1 c = suma(a, b);

    std::cout << c << std::endl;
    c = resta(a, b);
    std::cout << c << std::endl;
    c = producto(a, b);
    std::cout << c << std::endl;

    return 0;
}
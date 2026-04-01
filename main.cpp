#include <iostream> // cout 
#include "arit.h"   // suma, resta
using namespace std;

// g++ -std=c++2b main.cpp arit.cpp -o main
// El main() debe ser muy pero muy pequeñito
int main() {
    cout << "Hello FundProg-UNI!" << endl;
    
    int a;
    int b;
    int c, d, e, f;
    c = suma(a,b);
    d = resta(a,b);
    e = producto(a,b);
    f = cociente(a,b); 
    cout <<"La suma de a y b es: "<< c <<endl;
    cout <<"La resta de a y b es: "<< d <<endl;
    cout <<"El producto de a y b es: "<< e <<endl;
    cout <<"El cociente de a y b es: "<< f <<endl;
    //std::cout << "La suma de " << a << " y " << b << " es " << c << std::endl;
    return 0;
}
#include <iostream> // cout 
#include "arit.h"   // suma, resta, producto, cociente
using namespace std;

// g++ -std=c++2b main.cpp arit.cpp -o main
// El main() debe ser muy pero muy pequeñito
int main() {
    cout << "Hello FundProg-UNI!" << endl;
    
    T1 a, b;
    T1 c, d, e, f;
    cout << "Digite el valor de a: "; cin >> a;
    cout << "Digite el valor de b: "; cin >> b;
    c = suma(a,b); cout <<"La suma de "<< a <<" y "<< b << " es : "<< c <<endl;
    d = resta(a,b); cout <<"La resta de "<< a <<" y "<< b << " es : "<< d <<endl;
    e = producto(a,b); cout <<"El producto de " << a <<" y " << b << " es: "<< e <<endl;
    f = cociente(a,b); cout <<"El cociente de " << a << " y " << b << " es: "<< f <<endl;
    
    return 0;
}
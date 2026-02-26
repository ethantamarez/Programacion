#include <iostream> 
using namespace std; 
int main() { 
    int num; 
    cout << "Ingrese un entero de cuatro dígitos: "; 
    cin >> num; 
     
    // Suponiendo que el número es positivo 
    int d1 = num / 1000; 
    int d2 = (num / 100) % 10; 
    int d3 = (num / 10) % 10; 
    int d4 = num % 10; 
     
    int suma = d1 + d2 + d3 + d4; 
    cout << d1 << " + " << d2 << " + " << d3 << " + " << d4 << " = " << suma << endl; 
    return 0; 
}

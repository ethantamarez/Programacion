#include <iostream> 
#include <algorithm> 
using namespace std; 
 
int main() { 
    int a, b, c; 
    cout << "Ingrese el primer entero: "; 
    cin >> a; 
cout << "Ingrese el segundo entero: "; 
cin >> b; 
cout << "Ingrese el tercer entero: "; 
cin >> c; 
int minimo = min({a, b, c}); 
int maximo = max({a, b, c}); 
int medio = a + b + c - minimo - maximo; 
cout << "Los enteros ordenados son: " << minimo << " " << medio << " " << maximo 
<< endl; 
return 0; 
}

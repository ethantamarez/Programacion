#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
const double PI = 3.141592653589793; 
int main() { 
double r, height; 
cout << "Ingrese el radio del cilindro: "; 
cin >> r; 
cout << "Ingrese la altura del cilindro: "; 
cin >> height; 
double volume = PI * r * r * height; 
cout << "El volumen del cilindro es " << fixed << setprecision(1) << volume << endl; 
return 0; 
} 

#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
const double PI = 3.141592653589793; 
int main() { 
double r; 
cout << "Ingrese el radio: "; 
cin >> r; 
double area = PI * r * r; 
double volume = (4.0 / 3.0) * PI * r * r * r; 
cout << "Área del círculo: " << fixed << setprecision(2) << area << endl; 
cout << "Volumen de la esfera: " << volume << endl; 
return 0; 
}

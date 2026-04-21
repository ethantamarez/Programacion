#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
const double PI = 3.141592653589793; 
int main() { 
double s; 
int n; 
cout << "Ingrese la longitud del lado: "; 
cin >> s; 
cout << "Ingrese el número de lados: "; 
cin >> n; 
double area = (n * s * s) / (4 * tan(PI / n)); 
cout << "El área del polígono regular es " << area << endl; 
return 0; 
} 

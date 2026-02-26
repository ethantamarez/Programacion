#include <iostream> 
#include <iomanip> 
using namespace std; 
 
int main() { 
    double base, height; 
    cout << "Ingrese la longitud de la base del triángulo: "; 
    cin >> base; 
    cout << "Ingrese la altura del triángulo: "; 
    cin >> height; 
     
double area = (base * height) / 2.0; 
cout << "El área del triángulo es " << area << endl; 
return 0; 
}

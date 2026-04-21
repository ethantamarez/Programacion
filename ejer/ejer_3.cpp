#include <iostream> 
using namespace std; 
/*Programa para calcular el área de una habitación*/ 
int main() { 
double largo, ancho; 
cout << "Ingrese la longitud de la habitación en metros: "; 
cin >> largo; 
cout << "Ingrese el ancho de la habitación en metros: "; 
cin >> ancho; 
double area = largo * ancho; 
// Mostrar el resultado 
cout << "El área de la habitación es " << area << " metros cuadrados." << endl; 
return 0; 
}

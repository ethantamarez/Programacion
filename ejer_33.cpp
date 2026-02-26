#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
int numLoaves; 
cout << "Ingrese el número de barras de pan viejo que se compran: "; 
cin >> numLoaves; 
double regularPrice = numLoaves * 3.49; 
double discount = regularPrice * 0.60; 
double totalPrice = regularPrice - discount; 
cout << "Precio regular: $ " << fixed << setprecision(2) << regularPrice << endl; 
cout << "Descuento: $ " << discount << endl; 
cout << "Precio total: $ " << totalPrice << endl; 
return 0; 
}

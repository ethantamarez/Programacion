#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double mass, deltaT; 
cout << "Ingrese la masa de agua en gramos: "; 
cin >> mass; 
cout << "Ingrese el cambio de temperatura en grados Celsius: "; 
cin >> deltaT; 
double Q = mass * 4.186 * deltaT; // Energía en julios 
cout << "La cantidad de energía necesaria es " << Q << " Julios." << endl; 
double kWh = Q / 3600000.0; 
double cost = kWh * 0.085; 
cout << "El costo de calentar el agua es $ " << fixed << setprecision(2) << cost << 
endl; 
return 0; 
}

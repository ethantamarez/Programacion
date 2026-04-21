#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double P, V, T; 
cout << "Ingrese la presión en Pascales: "; 
cin >> P; 
    cout << "Ingrese el volumen en litros: "; 
    cin >> V; 
    cout << "Ingrese la temperatura en Kelvin: "; 
    cin >> T; 
     
    const double R = 8.314; // J/(mol·K) 
    V *= 0.001; // Convertir litros a m^3 
    double n = (P * V) / (R * T); 
     
    cout << "La cantidad de gas en moles es " << fixed << setprecision(4) << n << endl; 
    return 0; 
}

#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
int main() { 
double T, V; 
cout << "Ingrese la temperatura en grados Celsius: "; 
cin >> T; 
cout << "Ingrese la velocidad del viento en km/h: "; 
cin >> V; 
double WCT = 13.12 + 0.6215 * T - 11.37 * pow(V, 0.16) + 0.3965 * T * pow(V, 0.16); 
cout << "La sensación térmica es " << fixed << setprecision(2) << WCT << " grados Celsius." << endl; 
return 0; 
}

#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double celsius; 
cout << "Ingrese la temperatura en grados Celsius: "; 
cin >> celsius; 
double fahrenheit = (9.0/5.0) * celsius + 32; 
double kelvin = celsius + 273.15; 
cout << "Fahrenheit: " << fixed << setprecision(2) << fahrenheit << endl; 
cout << "Kelvin: " << kelvin << endl; 
return 0; 
}

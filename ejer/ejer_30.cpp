#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double kPa; 
cout << "Ingrese la presión en kilopascales: "; 
cin >> kPa; 
double psi = kPa * 0.145038; 
double mmHg = kPa * 7.50062; 
double atm = kPa * 0.00986923; 
cout << "En psi: " << fixed << setprecision(2) << psi << endl; 
cout << "En mmHg: " << mmHg << endl; 
cout << "En atm: " << atm << endl; 
return 0; 
} 

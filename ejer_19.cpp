#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
int main() { 
double height; 
cout << "Ingrese la altura en metros: "; 
cin >> height; 
double finalVelocity = sqrt(2 * 9.8 * height); 
cout << "La velocidad final del objeto es " << fixed << setprecision(2) << finalVelocity 
<< " m/s." << endl; 
return 0; 
}

#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double feet; 
cout << "Ingrese la distancia en pies: "; 
cin >> feet; 
double inches = feet * 12; 
double yards = feet / 3; 
double miles = feet / 5280; 
cout << "Pulgadas: " << fixed << setprecision(2) << inches << endl; 
cout << "Yardas: " << yards << endl; 
cout << "Millas: " << miles << endl; 
return 0; 
}

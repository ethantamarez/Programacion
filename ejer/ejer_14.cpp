#include <iostream> 
using namespace std; 
 
int main() { 
    int feet, inches; 
    cout << "Ingrese su altura en pies: "; 
    cin >> feet; 
    cout << "Ingrese su altura en pulgadas: "; 
    cin >> inches; 
double cm = (feet * 12 + inches) * 2.54; 
cout << "Su altura en centímetros es " << cm << endl; 
return 0; 
} 

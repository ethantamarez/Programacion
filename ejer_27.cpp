#include <iostream> 
#include <iomanip> 
using namespace std; 
int main() { 
double peso, altura; 
cout << "Ingrese el peso en kilogramos: "; 
cin >> peso; 
cout << "Ingrese la altura en metros: "; 
cin >> altura; 
if(altura <= 0) { 
cout << "La altura debe ser mayor que cero." << endl; 
return 1; 
}
double imc = peso / (altura * altura); 
cout << "El índice de masa corporal es " << fixed << setprecision(2) << imc << endl; 
return 0; 
} 

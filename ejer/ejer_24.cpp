#include <iostream> 
using namespace std; 
int main() { 
int dias, horas, minutos, segundos; 
cout << "Ingrese días: "; 
cin >> dias; 
cout << "Ingrese horas: "; 
cin >> horas; 
cout << "Ingrese minutos: "; 
cin >> minutos; 
cout << "Ingrese segundos: "; 
cin >> segundos; 
int totalSegundos = dias * 86400 + horas * 3600 + minutos * 60 + segundos; 
cout << "El total de segundos es " << totalSegundos << endl; 
return 0; 
}

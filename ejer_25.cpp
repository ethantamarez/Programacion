#include <iostream> 
using namespace std; 
int main() { 
int totalSegundos; 
cout << "Ingrese el número total de segundos: "; 
cin >> totalSegundos; 
int dias = totalSegundos / 86400; 
totalSegundos %= 86400; 
int horas = totalSegundos / 3600; 
totalSegundos %= 3600; 
int minutos = totalSegundos / 60; 
int segundos = totalSegundos % 60; 
cout << "Días: " << dias << endl; 
cout << "Horas: " << horas << endl; 
cout << "Minutos: " << minutos << endl; 
cout << "Segundos: " << segundos << endl; 
return 0; 
} 

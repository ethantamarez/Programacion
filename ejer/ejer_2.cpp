#include <iostream> 
#include <string> 
using namespace std; 
/** Programa que pide el nombre al usuario y lo saluda*/ 
int main() { 
string nombre; 
cout << "Ingrese su nombre: "; 
//   Obtener el nombre por línea de comandos  
getline(cin, nombre); 
//Mostrar el resultado 
cout << "Hola, " << nombre << "!" << endl; 
return 0; 
} 

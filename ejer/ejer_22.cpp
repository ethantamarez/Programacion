#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
int main() { 
double s1, s2, s3; 
cout << "Ingrese la longitud del primer lado: "; 
cin >> s1; 
cout << "Ingrese la longitud del segundo lado: "; 
cin >> s2; 
cout << "Ingrese la longitud del tercer lado: "; 
cin >> s3; 
double s = (s1 + s2 + s3) / 2.0; 
double area = sqrt(s * (s - s1) * (s - s2) * (s - s3)); 
cout << "El área del triángulo es " << fixed << setprecision(2) << area << endl; 
return 0; 
}

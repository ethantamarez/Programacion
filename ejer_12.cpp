#include <iostream> 
#include <cmath> 
#include <iomanip> 
using namespace std; 
const double PI = 3.141592653589793; 
const double EARTH_RADIUS_KM = 6371.0; 
double toRadians(double degrees) { 
return degrees * PI / 180.0; 
} 
int main() { 
double lat1, lon1, lat2, lon2; 
cout << "Ingrese la latitud del primer punto (grados): "; 
cin >> lat1; 
cout << "Ingrese la longitud del primer punto (grados): "; 
cin >> lon1; 
cout << "Ingrese la latitud del segundo punto (grados): "; 
cin >> lat2; 
cout << "Ingrese la longitud del segundo punto (grados): "; 
cin >> lon2; 
// Convertir a radianes 
lat1 = toRadians(lat1); 
lon1 = toRadians(lon1); 
lat2 = toRadians(lat2); 
lon2 = toRadians(lon2); 
double dlat = lat2 - lat1; 
double dlon = lon2 - lon1; 
double a = sin(dlat/2) * sin(dlat/2) + 
cos(lat1) * cos(lat2) * 
sin(dlon/2) * sin(dlon/2); 
double c = 2 * atan2(sqrt(a), sqrt(1-a)); 
double distance = EARTH_RADIUS_KM * c; 
cout << "La distancia entre los dos puntos es " << fixed << setprecision(2)  
<< distance << " km." << endl; 
return 0; 
}

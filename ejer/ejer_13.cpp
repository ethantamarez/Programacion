#include <iostream> 
using namespace std; 
int main() { 
int amount; 
cout << "Ingrese la cantidad de dinero en centavos: "; 
cin >> amount; 
int quarters = amount / 25; 
    amount %= 25; 
    int dimes = amount / 10; 
    amount %= 10; 
    int nickels = amount / 5; 
    amount %= 5; 
    int pennies = amount; 
     
    cout << "Quarters: " << quarters << endl; 
    cout << "Dimes: " << dimes << endl; 
    cout << "Nickels: " << nickels << endl; 
    cout << "Pennies: " << pennies << endl; 
    return 0; 
} 

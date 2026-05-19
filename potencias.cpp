#include <iostream>
using namespace std;

int main() {
   
    int n;
    int suma_impares = 0;
   

    cout << "Ingrese el numero N: ";
    cin >> n;

    
    cout << "Impares: ";
    for (int i = 1; i <= n; i++) {
       
        if (i % 2 != 0) {
            if (i == 1) {
                cout << i; 
            } else {
                cout << "," << i; 
            }
            suma_impares += i;
        }
    }
    cout << endl;
    cout << "La suma de los numeros impares es: " << suma_impares << endl;

   
    cout << "\nPotencia" << endl;
    
    int x, y;
    int potencia = 1;

    cout << "ingrese x: ";
    cin >> x;
    cout << "ingrese y: ";
    cin >> y;

    for (int i = 1; i <= y; i++) {
        potencia = potencia * x; 
    }

    cout << "Resultado de la potencia: " << potencia << endl;

    return 0;
}
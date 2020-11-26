#include <iostream>
#include <cmath>
using namespace std;

int main() {

// variables
double Valor_Cateto;

// Cuerpo
cout << "¡Hola! te ayudaré a calcular el área y el perimetro de un cuadrado" << endl;
cout << "Inserte un lado del cualdrado en metros, por favor: ";
cin >> Valor_Cateto;

//Operaciones
cout << "El área del cuadrado es " << Valor_Cateto*Valor_Cateto << " m²." << endl;
cout << "El perimetro es " << 4*Valor_Cateto << " m." << endl;

}
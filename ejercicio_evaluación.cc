#include <iostream>
#include <cmath>
using namespace std;

int main () {

	double altura;
	double radio;
	const double pi = 3.1415926535;

	cout << "Hola!. Te ayudaré a calcular el área y el cilindro de un cilindro" << endl;

	cout << "Introduzca la altura del cilindro en metros: ";
	cin >> altura;
	cout << endl;


	cout << "Introduzca el radio de la base del cilindro en metros: ";
	cin >> radio;
	cout <<endl;

	cout << "El área del cilindro es " << 2*pi*(radio*(altura+radio)) << " m² y el volumen es " << pi*radio*radio*altura << " m³" <<endl;

	return 0;
}


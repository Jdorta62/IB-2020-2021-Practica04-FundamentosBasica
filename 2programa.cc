#include <iostream>
using namespace std;

int main() {

// variables
const double x = 0.0081; // valor en euros igual a 1 yen
double y; // cantidad de euros del usuario

//cuerpo
cout << "Introduzca la cantidad de euros que posee para saber de cuantos yenes dispondría: ";
cin >> y;

cout << endl;

cout << "Con " << y << " euros, usted tendría " << y/x 
<< " yenes aproximadamente." << endl;

}
/* 
Programa para saber cuantos años le flatan al usuario para jubilarse
*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

// variables
const int EdadJubilacion = 67;
int EdadUsuario;

// cuerpo
cout << "¿Quieres saber cuántos años te faltan para jubilarte? Dime tu edad y te lo diré en un instante ";
cin >> EdadUsuario;

cout << " " << endl;

// operaciones
cout << "Te faltan " << EdadJubilacion-EdadUsuario << " años para jubilarte y descansar." << endl;
cout << endl;
}
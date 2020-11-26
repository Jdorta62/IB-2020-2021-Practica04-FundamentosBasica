#include <iostream>
#include <cmath>
using namespace std;

int main () {

//Variables
int x1;
int y1;
int z1;

int x2;
int y2;
int z2;

//Cuerpo
cout << "Inserte (en orden x *space* y *space* z) las coordenadas de 2 puntos para conocer la distancia entre estos." << endl;
cout << "Inserte coordenadas del punto A: ";
cin >> x1 >> y1 >> z1;

cout << endl;

cout << "Inserte coordenadas del punto B: ";
cin >> x2 >> y2 >> z2;

cout << endl;

cout << "La distancia entre el punto A y B es igual a: " << sqrt(abs(x2-x1) + abs(y2-y1) + abs(z2-z1)) << endl;

}
#include <iostream>
using namespace std;

int main () {

//variables
double alumno1;
double alumno2;
double alumno3;

//cuerpo
cout << "Introduzca nota del primero alumno: " << endl;
cin >> alumno1;
cout << endl;

cout << "Introduzca nota del segundo alumno: " << endl;
cin >> alumno2;
cout << endl;

cout << "Introduzca nota del tercer alumno: " << endl;
cin >> alumno3;
cout << endl;

cout << "La nota media de los 3 alumnos es " << 
(alumno1+alumno2+alumno3)/3 << "." << endl;


}
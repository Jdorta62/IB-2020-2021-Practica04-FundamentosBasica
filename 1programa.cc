#include <iostream>
using namespace std;

int main() {

// variables
const int y = 1624; //precio por metro de carretera
int x; //metros de carretera

// cuerpo
cout << "Inserte metros de carretera que quiera construir para saber el coste que implicaría: ";
cin >> x;

cout << endl;

cout << "El coste por construir " << x 
<< " metros de carretera es de " << x*y << " euros." << endl;

}
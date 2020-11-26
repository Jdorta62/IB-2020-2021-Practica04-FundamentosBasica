#include <iostream>
using namespace std;

int main() {
   float ml, km;
   cout << "pasar de millas a kilómetros. Inserte millas ";
   cin >> ml;
   km = ml * 1.609; 
   cout << "Son " << km << " kilómetros" << endl;
}
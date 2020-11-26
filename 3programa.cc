#include <iostream>
using namespace std;

int main () {

//Variables del valor de cada moneda y billete 
double _uno = 0.01;
double _cinco = 0.05;
double _diez = 0.1;
double _veinte = 0.2;
double _cincuenta = 0.5;
int uno = 1; 
int dos = 2;
int cinco = 5;
int diez = 10;
int veinte = 20;
int cincuenta = 50;
int cien = 100;
int doscientos = 200;
int quinientos = 500;

//variables que se refieren a la cantidad que tiene el usuario de cada moneda y billete 
int _uno_;
int _cinco_;
int _diez_;
int _veinte_;
int _cincuent_;
int uno_;   
int dos_;
int cinco_;
int diez_;
int veinte_;
int cincuenta_;
int cien_;
int dosciento_;
int quiniento_;

//Cuerpo

cout << "¿Quieres saber cuánto dinero tienes en total pero te da pereza hacer los cálculos? " << endl;
cout << "No te preocupes, te puedo ayudar." << endl;
cout << endl;

//Monedas
cout << "¿Cuántas monedas de 1 centimo tienes? ";
cin >> _uno_;
cout << endl;
cout << "¿Cuántas monedas de 5 centimo tienes? ";
cin >> _cinco_;
cout << endl;
cout << "¿Cuántas monedas de 10 centimo tienes? ";
cin >> _diez_;
cout << endl;
cout << "¿Cuántas monedas de 20 centimo tienes? ";
cin >> _veinte_;
cout << endl;
cout << "¿Cuántas monedas de 50 centimo tienes? ";
cin >> _cincuent_;
cout << endl;
cout << "¿Cuántas monedas de 1 euro tienes? ";
cin >> uno_;
cout << endl;
cout << "¿Cuántas monedas de 2 euros tienes? ";
cin >> dos_;
cout << endl;

//Billetes
cout << "¿Cuántos billetes de 5 euros tienes? ";
cin >> cinco_;
cout << endl;
cout << "¿Cuántos billetes de 10 euros tienes? ";
cin >> diez_;
cout << endl;
cout << "¿Cuántos billetes de 20 euros tienes? ";
cin >> veinte_;
cout << endl;
cout << "¿Cuántos billetes de 50 euros tienes? ";
cin >> cincuenta_;
cout << endl;
cout << "¿Cuántos billetes de 100 euros tienes? ";
cin >> cien_;
cout << endl;
cout << "¿Cuántos billetes de 200 euros tienes? ";
cin >>  dosciento_;
cout << endl;
cout << "¿Cuántos billetes de 500 euros tienes? ";
cin >> quiniento_;
cout << endl;

//operaciones
cout << "Tienes, en total, " << 
(_uno+_uno_)+(_cinco*_cinco_)+(_diez+_diez_)+(_veinte+_veinte_)
+(_cincuenta*_cincuent_)+(uno*uno_)+(dos*dos_)+(cinco*cinco_)
+(diez*diez_)+(cincuenta*cincuenta_)+(cien*cien_)+(doscientos*dosciento_)
+(quinientos*quiniento_) << " euros." << endl;

}
#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

bool primo(int Num1){
	
if (Num1  == 0 || Num1 == 1 || Num1 == 4) return false;
  for (int x = 2; x <Num1 / 2; x++) {
    if (Num1 % x == 0) return false;
  }
  // Si no se pudo dividir por ninguno de los de arriba, s� es primo
  return true;	
	
}


int main() {
	setlocale(LC_CTYPE, "Spanish"); // funcion de la libreria para poder usar tildes y letras como la � que no esntan en el idioma ingles
	int Num1;
	
	cout <<"Ingrese un n�mero para verificar si es primo: " ;
	cin >>Num1;
	
	if (primo(Num1)){
		cout <<"Es n�mero PRIMO.";
	}
	else {
		cout <<"No es n�mero PRIMO.";
	}
	
	return 0;
}
//2do Parcial Mario David Tereta Sapalun

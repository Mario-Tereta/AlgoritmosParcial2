#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

enum {PRIMAVERA = 1, VERANO, OTONIO, INVIERNO};

int main (){
	setlocale (LC_CTYPE, "Spanish");
	
	int Dia;
	string Nombre;
	
	cout <<"Ingresa un n�mero del rango 1-4 para mostrar una estaci� del a�o." <<endl;
    cin >> Dia;

 switch (Dia) {
        case PRIMAVERA:
            Nombre = "Primavera";
            break;
        case VERANO:
            Nombre = "Verano";
            break;
        case OTONIO:
            Nombre = "Oto�o";
            break;
        case INVIERNO:
        	Nombre = "Inverno";
            break;
        default:
            cout << "No es un n�mero dentro del rango." << endl;
      
    }
	
	cout<<"La estaci�n de a�o es: " <<Nombre <<endl;
	
	return 0;
}
//2do Parcial Mario David Tereta Sapalun 0905-15-14297

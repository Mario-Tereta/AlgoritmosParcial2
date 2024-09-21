#include <iostream>
#include <locale.h>

using namespace std;

int main (){
	
	int  N1, Resul;
	
	cout <<"Ingrese el numero para imprimir su tabla: ";
	cin >>N1;
	
	for(int i=1 ;i <= 10; i++){
		
		Resul = i * N1;
		cout <<i <<" X " <<N1 <<" = " <<N1*i <<endl;
		
	}
	
	return 0;
}
//2do Parcial Mario David Tereta Sapalun 0905-15-14297

#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

double potencia(double N1, int N2) {
    double resultado = 1;
    for (int i = 0; i < N2; i++) {
        resultado *= N1;
    }
    return resultado;
}

int main() {
    double N1;
    int N2;

    cout << "Ingrese el número Base: ";
    cin >> N1;
    cout << "Ingrese el número Exponente: ";
    cin >> N2;

    double resultado = potencia(N1, N2);
    cout << "El resultado es: " << resultado << endl;
	return 0;
}
//2do Parcial Mario David Tereta Sapalun

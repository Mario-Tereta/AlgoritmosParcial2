#include <iostream>

using namespace std;

int main (){
	
	int Num1, i;
	
	cout <<"Ingrese el Numero que desea saber su tabla: ";
	cin>>Num1; cout <<endl;
	
	while (i<=10){
		
		cout <<Num1 <<" X " << i <<" = " <<Num1 * i <<endl;		
		
		i += 1;
	}
	
	return 0;
}

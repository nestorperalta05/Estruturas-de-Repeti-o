#include <iostream>
using namespace std;

int main (){
	int base, acumulador;
	int cont=1;
	int expoente, resultado;
	
	cin >> base;
	cin >> expoente;
	
	if (expoente==0){
		cout << 1;
	
	return 0;	
	}
	
	acumulador=base;
	
	while (cont<expoente){	
		
		resultado=base*acumulador;
			acumulador=resultado;
			cont++;	
	}	
	cout << resultado;
	return 0;	
}	

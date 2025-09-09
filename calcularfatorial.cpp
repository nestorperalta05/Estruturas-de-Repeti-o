#include <iostream>
using namespace std;

int main (){
	int numero, fatorial, cont;
	
	cin >> numero;
	fatorial = 1;
	cont = numero;
	
	while (cont>0){	
		fatorial=fatorial*cont;
		cont--;
	}
	cout << fatorial;
	
	return 0;
}		
	

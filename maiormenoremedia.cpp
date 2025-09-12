#include <iostream>
#include <fstream>
using namespace std;

int main (){
	
	ifstream entrada("entrada.txt");
	int valor, cont=1, acumulador=0;
	int maiorvalor, menorvalor;
	
	if (entrada>>valor){
		maiorvalor=valor;
		menorvalor=valor;
	}
	
	while (entrada>>valor){
		if (valor<menorvalor){
			menorvalor=valor;
		}
		else if (valor>maiorvalor){
			maiorvalor=valor;
		}
		acumulador+=valor;
		cont++;
	}
	cout<<menorvalor<<endl;
	cout<<maiorvalor<<endl;
	cout<<acumulador/cont<<endl;
	
	return 0;
}	

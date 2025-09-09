#include <iostream>
using namespace std;

int main (){
	
	cout << "Insira uma nota de 0 a 10: ";
	
	int nota;
		
		cin >> nota;
		
		//caminho padrao verificando se a nota é de 0 a 10
	if ((nota>0) and (nota<10)){
		
		cout << "A nota é: " << nota;
		
		return 0;
		//se a condicional for satisfeita o codigo termina aqui
	}
		//se a condicional nao for satisfeita o codigo continua aqui
	while ((nota<0) or (nota>10)){
		
		cout << "Insira um valor válido" << endl;
		
		cin >> nota;	
	}
		cout << "A nota é: " << nota;
		return 0;
}		

		 

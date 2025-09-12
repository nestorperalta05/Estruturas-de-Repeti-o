#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ifstream entrada("dados.txt");
	int valorm, valorM, pontos;
	entrada >> valorm >> valorM;
	
	int cont=0;
	
	while (entrada>>pontos){
		if ((pontos>=valorm) and (pontos<=valorM)){
			cont++;
		}
	}
	cout << cont;
		return 0;
		
	}
	

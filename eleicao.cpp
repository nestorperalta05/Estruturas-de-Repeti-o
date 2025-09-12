#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

int main (){
	string chapa1, chapa2, local;
	int votos1, votos2; 
	float acumulador1=0, acumulador2=0;
	ifstream entrada("eleicao.txt");
		entrada >> chapa1 >> chapa2;
			
	
	while (entrada>>local>>votos1>>votos2){
	acumulador1+=votos1;
	acumulador2+=votos2;
	}
	
	if (acumulador1>acumulador2){
		cout << chapa1 << endl;
		cout << acumulador1 << endl;
		cout << acumulador1/(acumulador2+acumulador1)*100<<endl;
	}
	
	else if (acumulador1<acumulador2){
		cout << chapa2 << endl;
		cout << acumulador2 << endl;
		cout << fixed << setprecision(2) <<acumulador2/(acumulador1+acumulador2)*100<<endl;
	}
	
	return 0;
}	

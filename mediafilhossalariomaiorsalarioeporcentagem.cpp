#include <iostream>
#include <fstream>
using namespace std;

int main (){
	ifstream entrada ("entrada");
	float salario, filhos;
	float mediasalario, mediafilhos, maiorsalario, pessoas1000, acumulador1=0, acumulador2=0, cont3=0;
	int cont1=0;
	
	if (entrada>>salario>>filhos){
		maiorsalario=salario;
		acumulador1+=salario;
		cont1++;
		acumulador2+=filhos;
	}
	
	if (salario<=1000){
		cont3++;
	}
	
	
	while (entrada>>salario>>filhos){
		if (salario>maiorsalario){
			maiorsalario=salario;
		}
		
		if (salario<=1000){
			cont3++;
		}
		
		acumulador1+=salario;
		cont1++;
		
		acumulador2+=filhos;
		
	}
	
	mediasalario=acumulador1/cont1;
	mediafilhos=(float)acumulador2/cont1;
	pessoas1000=(float)cont3/cont1;
	
	cout<<mediasalario<<endl;
	cout<<mediafilhos<<endl;
	cout<<maiorsalario<<endl;
	cout<<pessoas1000<<endl;
	
	return 0;
}	
		

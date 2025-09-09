#include <iostream>
using namespace std;

int main (){
	
	int num1, num2, count, intervalo;
	cin >> num1;
	cin >> num2;
	
	count=num1;
	
	while (count<num2){
	intervalo=count++;
	cout << intervalo << ", ";
	}	
	
	
	return 0;
}	

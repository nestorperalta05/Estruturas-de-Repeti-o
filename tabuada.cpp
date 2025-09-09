#include <iostream>
using namespace std;

int main (){
	int numero, count, produto;
		count=1;
	cin >> numero;
	
	while (count<11){
		produto=numero*count;
		cout << numero << " x " << count << "= " << produto << endl;
		count++;
	}
	return 0;
}		

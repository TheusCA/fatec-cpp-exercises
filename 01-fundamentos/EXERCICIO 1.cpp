#include <iostream>
using namespace std;
 
int main() {
 
int x , y, troca;
 
	cout<< "Digite o valor de X: ";
	cin>> x;
	cout<< "Digite o valor de Y: ";
	cin>> y;
	
	cout<< "Antes da troca: \n";
	cout<< "O valor da variavel X e : "<<x<<"\n";
	cout<< "O valor da variavel Y e: "<< y<<"\n";
	
	troca = x;	
	
	cout<< "Depois da troca: \n";
	cout<< "Valor de X: "<<y<<"\n";
	cout<< "Valor de Y: "<<troca<<"\n";

 
return 0;
}

#include <iostream>
using namespace std;

int main() {
  
    float peso, altura, imc;

    cout << "Digite seu peso em kg: ";
    cin >> peso;
    cout << "Digite sua altura em : ";
    cin >> altura;

	imc = peso/(altura * altura);
	
	if(imc < 18.5){
		cout<< "O IMC e de :" <<imc<<"\n";
		cout<< "Abaixo do peso";
	}else if(imc >= 18.5 && imc < 24.9 ) {
		cout<< "O IMC e de :" <<imc<<"\n";
		cout<< "Peso normal";
	}else if(imc >= 25 && imc < 29.9){
		cout<< "O IMC e de :" <<imc<<"\n";
		cout<< "Sobrepeso";
	}else if(imc >= 30){
		cout<< "O IMC e de :" <<imc<<"\n";
		cout<< "Obesidade";
	}

    return 0;
}


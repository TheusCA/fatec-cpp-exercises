 
#include <iostream>
#include <string>
using namespace std;
 
int main() {
 
int N1, N2, L1, L2, media;
char aluno;
	cout<< "Digite o valor da primeira nota: ";
	cin>> N1;	
	cout<< "Digite o valor da segunda nota: ";
	cin>> N2;
do {	
	cout<< "Digite o tipo de aluno (R ou E): ";
	cin>> aluno;
  } while (aluno != 'R' && aluno != 'r' && aluno != 'E' && aluno != 'e');
	aluno = toupper(aluno);
	switch(aluno) {
	case 'R':
		cout<< "Aluno R selecionado, informe o valor de L1: ";
		cin>> L1;
		cout<< "Informe o valor de L2: ";
		cin>> L2;
		media = (((N1+N2)/2)*0.7) + (((L1+L2)/2)*0.3);
		cout<< "A media de aluno (R) e de: "<<media<<"\n";
		if(media >= '6'){
			cout<< "Aluno aprovado! ";
		}else{
			cout<< "Aluno reprovado!";
		}		
		break;
	case 'E':
		media = (N1 + N2)/2;
		cout<< "A media do aluno (E) e de: "<<media<<"\n";
		if(media >= 6){
			cout<< "Aluno aprovado! ";
		}else{
			cout<< "Aluno reprovado!";
		}
		break;
	default:
		cout<< "Tipo de aluno inexistente! ";
		break;
}
 
return 0;
}


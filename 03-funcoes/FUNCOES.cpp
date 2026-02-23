#include <iostream>
using namespace std;
void acessa();
void multiplicacao(float x, float y);
void divisao(float x, float y);
void soma(float x, float y);
 
float x, y;
main(){
	
	int op;
do{	

	cout<< "DIGITE UMA DAS OPCOES ABAIXO:" "\n";
	cout<< "1- Acessar valores""\n";
	cout<< "2- Multiplicacao""\n";
	cout<< "3- Divisao""\n";
	cout<< "4- Soma""\n";
	cout<< "5- Sair""\n";
	cin>> op;
	
switch (op){
	case 1: acessa();
			break;
	case 2: multiplicacao(x,y);
			break;
	case 3: divisao(x,y);
			break;
	case 4: soma(x,y);
			break;							
}
	
}while(op != 5);
	
}
 
void acessa (){
      cout<<"Digite os valores que serao acessados:\n";
      cout<<"Digite o 1o. valor:"; cin>>x;
      cout<<"Digite o 2o. valor:"; cin>>y;
    if(x > y){
      	cout<<"O maior valor e: "<<x<<"\n";	
      	cout<<"O menor valor e: "<<y<<"\n";
	}else{
	  	cout<<"O maior valor e: "<<y<<"\n";
	  	cout<<"O menor valor e: "<<x<<"\n";
	}
}
 
void multiplicacao(float x, float y){
	  x = 0;
	  y = 0;
	  cout<<"Digite os valores para realizar a multiplicacao:\n";
      cout<<"Digite o 1o. valor:"; cin>>x;
      cout<<"Digite o 2o. valor:"; cin>>y;
      float mult;
      mult = x*y;
      cout<<"O resultado da multiplicacao e: "<<mult<<"\n";    
}
void divisao(float x, float y){
	  x = 0;
	  y = 0;
	  cout<<"Digite os valores para realizar a divisao:\n";
      cout<<"Digite o 1o. valor:"; cin>>x;
      cout<<"Digite o 2o. valor:"; cin>>y;
    if(y == 0){
      	cout<<"Nao e possivel dividir por zero""\n";
       	cout<<"Digite os valores para realizar a divisao:\n";
      	cout<<"Digite o 1o. valor:"; cin>>x;
      	cout<<"Digite o 2o. valor:"; cin>>y;
	}else{
      float div;
      div = x/y;
      cout<<"O resultado da divisao e: "<<div<<"\n";  
	}  
}
void soma(float x, float y){
      x = 0;
	  y = 0;
	  cout<<"Digite os valores para realizar a soma:\n";
      cout<<"Digite o 1o. valor:"; cin>>x;
      cout<<"Digite o 2o. valor:"; cin>>y;
      float som;
      som = x+y;
      cout<<"O resultado da soma e: "<<som<<"\n";    
}

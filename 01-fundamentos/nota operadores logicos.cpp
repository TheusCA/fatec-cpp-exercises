#include <iostream>
using namespace std;
#define qtd_notas 2
int main(){
	
	float N1;
	cout<< "Digite a nota: ";
	cin>> N1;
	
	if(N1>=0.0 and N1 <= 2.9){
	cout<< "Sua nota ficou classificada como E";
	
		
		
			if(N1 >=3.0 and N1 <= 4.9){
			cout<< "Sua nota ficou classificada como D ";
		}
	
			else if(N1 >=5.0 and N1 <= 6.9){
			cout<< "Sua nota ficou classificada como C ";
		}
		
			else if(N1 >=7.0 and N1 <= 8.9){
			cout<< "Sua nota ficou classificada como B ";
		}
		
			else if(N1 >=9.0 and N1 <= 10.0){
			cout<< "Sua nota ficou classificada como A ";
		}
	}else{
		
	}
}

	



#include <stdio.h>
#include <conio.h>
#include <windows.h>

#define TAM 6

struct produtos{
	char nome[50];
	float valor;
};

int main(){
	produtos p[TAM];
	int i;
	float maiorValor = 0;
	
	for(i=0;i<TAM;i++){
		system("cls");
		fflush(stdin);
		printf("Nome do produto: ");
		gets(p[i].nome);
		printf("\nValor do produto: ");
		scanf("%f", &p[i].valor);
	}
	
	for(i=0;i<TAM;i++){
		printf("\nNome do produto %d: %s", i,p[i].nome);
		printf("\nValor do produto %d: %.2f", i,p[i].valor);
		if(maiorValor < p[i].valor){
			maiorValor = p[i].valor;
		}
	}
	
	printf("\nValor do produto mais caro: %.2f", maiorValor);
	
	return 0;
}

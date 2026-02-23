#include <stdio.h>

struct produto{
	char nome[50];
	float valor;
};

int main(){
	
 produto a, b;
 
 	printf("Digite o nome do primeiro produto: ");
 	gets(a.nome);
 	printf("\nDigite o valor do primeiro produto: ");
 	scanf("%f", &a.valor);
 
 	getchar();
	printf("\nDigite o nome do segundo produto: ");
 	fgets(b.nome, sizeof(b.nome),stdin);
 	printf("\nDigite o valor do segundo produto: ");
 	scanf("%f", &b.valor);
 
 	printf("\nO nome do primeiro produto e %s e custa %.2f", a.nome, a.valor);
 	printf("\nO nome do segundo produto e %s e custa %.2f", b.nome, b.valor);
 	
 	if(a.valor > b.valor){
 		printf("\n\nO primeiro produto e o mais caro");
	 }else {
	 	printf("\n\nO segundo produto e o mais caro");
	 }

}

#include <stdio.h>

int main(){
	
	int soma, vet[5], i;
	
	for(i=0; i<5; i++){
		system("cls");
		printf("Digite os 5 valores: ");
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<5; i++){
		soma += vet[i];	
	}
	
	printf("A soma dos valores citados e: %d" ,soma);
	return 0;
}

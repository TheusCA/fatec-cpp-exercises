#include <stdio.h>

int main(){
	
	int vet[10], i;
	
	printf("Digite dez valores inteiros");
	
	for(i=0;i<10;i++){
		printf("\nDigite o valor %d/10: ", i + 1);
		scanf("%d", &vet[i]);
	}
	for(i=0;i<10;i++){
		if(vet[i] % 2 != 0){
			printf(" \n%d", vet[i]);		
		}
		
	}
	
	
	
	
}

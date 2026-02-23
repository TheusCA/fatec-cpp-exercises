#include <stdio.h>
#include <conio.h>
#include <windows.h>

void subtracao(float a, float b){
	float resultado = a-b;
	printf("O resultado da subtracao e: %.1f", resultado);
}

int main(){
	
	float num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	
	subtracao(num1, num2);
	
	return 0;
}

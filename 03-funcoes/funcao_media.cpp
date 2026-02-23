#include <stdio.h>
#include <conio.h>
#include <windows.h>

float media(float a, float b, float c){
	return (a+b+c);
}

int main(){
	
	float p1, p2, p3;
	
	printf("Digite respectivamente as tres notas: ");
	scanf("%f%f%f", &p1, &p2, &p3);
	
	printf("Media Aritmetica: %.2f", media (p1,p2,p3)/3);
	printf("\nMedia Ponderada: %.2f", media (p1 * 0.4,p2 * 0.3,p3 * 0.3 ));
	
return 0;	
}

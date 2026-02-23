#include <stdio.h>
#include <conio.h>
#include <windows.h>

float media(float a, float b, float c){
	return (a * 0.4 + b * 0.3 + c * 0.3);
}

int main(){
	
	float p1, p2, p3;
	
	printf("Digite respectivamente as tres notas: ");
	scanf("%f%f%f", &p1, &p2, &p3);
	
	printf("Media: %.1f", media (p1,p2,p3));
	
return 0;	
}

#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include <time.h>

int main(){
	
	int vet[10], i;
	
	srand(time(NULL));
	
	for(i=0; i<10; i++){
		vet[i] = rand() % 35 + 22;	
		printf("%d \t", vet[i]);
	}


	
	return 0;
}

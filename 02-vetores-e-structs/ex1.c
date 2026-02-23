#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	printf("%d \n", rand() % 21 + 10);
	printf("%d \n", rand() % 21 + 10);
	printf("%d \n", rand() % 21 + 10);
	printf("%d \n", rand() % 21 + 10);				
	printf("%d \n", rand() % 21 + 10);
	printf("%d \n", rand() % 21 + 10);
	
	return 0;
}


#include <stdio.h>

int main(){
    
    float pol, cm;
    
    printf("Digite a medida em polegadas para convertemos em centimetros: ");
    scanf("%f", &pol);
    cm = (pol * 2.54);
    printf("\n\nA medida em centimetros e: %.2f", cm);
    return 0;
}

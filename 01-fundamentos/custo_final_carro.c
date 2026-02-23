
#include <stdio.h>

int main(){
    
    float fabrica, distribuidor, impostos, custo_final;
    
    printf("Digite o custo de fabrica do carro:");
    scanf("%f", &fabrica);
    
    
    distribuidor = (fabrica * 0.28);
    impostos = (fabrica * 0.45);
    custo_final = (fabrica + impostos + distribuidor);
    
    
    printf("O valor final do carro e de: %.2f", custo_final);
    
    return 0;
}

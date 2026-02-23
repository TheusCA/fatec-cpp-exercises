#include <stdio.h>
 
int main(){
    
    int quant;
    float preço;
    
    printf("Digite quantas maças deseja comprar: ");
    scanf("%d", &quant);
    
    if(quant < 12){
        preço = 3.30 * quant;
        printf("O valor de cada maça é 3.30, portanto sua compra ficou: %.2f", preço);
    } else{
        preço = 3.00 * quant;
        printf("O valor de cada maça é 3.00, portanto sua compra ficou: %.2f", preço);
    }
    return 0;
}
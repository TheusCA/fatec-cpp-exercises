#include <stdio.h>
 
int main(){
    
    int tipoCliente;
    float valorTotal, desconto, valorFinal;
    
    printf("Digite o valor total da compra: ");
    scanf("%f", &valorTotal);
    
    printf("Digite o numero que condiz com o seu vinculo com a empresa: \nCliente(1) \nFuncionario(2) \nCliente vip(3)\n ");
    scanf("%d", &tipoCliente);
    
    if(tipoCliente == 2){
        desconto = valorTotal * 0.10;
        valorFinal = valorTotal - desconto;
        printf("O valor total com desconto para funcionario e de: %.2f", valorFinal);
    }else if(tipoCliente == 3){
        desconto = valorTotal * 0.05;
        valorFinal = valorTotal - desconto;
        printf("O valor total com desconto para cliente vip e de: %.2f", valorFinal);
    }else if (tipoCliente == 1){
        printf("O valor total da compra para cliente e de: %.2f", valorTotal);
    }
    return 0;
}
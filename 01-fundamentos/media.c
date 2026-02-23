#include<stdio.h>

main(){
    
    float media1, media2, n1, n2, n3;
    
        printf("Digite a nota da P1: ");
        scanf("%f", &n1);
        printf("\n\nDigite a nota da P2: ");
        scanf("%f", &n2);
        printf("\n\nDigite a nota da P3: ");
        scanf("%f", &n3);
    
        media1 = (n1 + n2 + n3)/3;
        
        printf("A media aritmetica e: %.2f", media1);

}

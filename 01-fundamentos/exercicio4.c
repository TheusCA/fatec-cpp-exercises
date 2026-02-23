#include <stdio.h>
 
int main(){
    
    float n1, n2, media;
    
    printf("Digite a nova da P1(0 a 10): ");
    scanf("%f", &n1);
    printf("Digite a nova da P2(0 a 10): ");
    scanf("%f", &n2);
    
    media = (n1+n2)/2;
    
    if(media >= 6){
        printf("Parabens, você foi aprovado com a media %.2f", media);
    }else{
        printf("Não foi dessa vez, você foi reprovado com a media %.2f", media);
    }

    return 0;
}
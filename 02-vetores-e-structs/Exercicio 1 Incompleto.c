#include <stdio.h>
#include <conio.h>

#define TAM 5

struct livro{
    char titulo[50];
    int ano, paginas;
    float preço;
    
};

int main(){
    
    struct livro a[TAM];
    float media=0, soma=0;
    int i;
    
    for(i=0;i<TAM;i++){
        printf("Digite o titulo do livro: ");
        gets(&a[i].titulo);
        printf("Digite o ano de edição: ");
        scanf("%d", &a[i].ano);
        printf("Digite o numero de paginas: ");
        scanf("%d", &a[i].paginas);
        printf("Digite o preço do livro: ");
        scanf("%f", &a[i].preço);
        soma += a.preço;
}
    media = soma/5;
    
    printf("\nA media do numero de paginas dos livros e: %f", media);

    return 0;
}

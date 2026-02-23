#include <stdio.h>
#include <conio.h>

#define TAM 5

struct aluno{
    char nome[50];
    int matricula;
    float p1, p2;
    
};

int main(){
    
    struct aluno a[TAM];
    float menorMedia, maiorMedia, maiorNota = 0, media=0, soma=0;
    int i, posicaoNota, posicaoMaiorMedia, posicaoMenorMedia;
    
    for(i=0;i<TAM;i++){
        printf("Digite o numero da matricula do aluno: ");
        scanf("%d", &a[i].matricula);
        printf("Digite o nome do aluno: ");
        gets(&a[i].nome);
        printf("Digite a nota da P1 do aluno: ");
        scanf("%f", &a[i].p1);
        printf("Digite a nota da P2 do aluno: ");
        scanf("%f", &a[i].p2);
        if(a[i].p1 > maiorNota){
            maiorNota = a[i].p1;
            posicaoNota = i;
        }
    }
    for(i=0;i<TAM;i++){
     soma += a[i].p1 + a[i].p2;
     media = soma/TAM;
     if(media>a[i].maiorMedia){
         maiorMedia = a[i].media;
         posicaoMaiorMedia = i;
     }else if(media<a[i].maiorMedia){
         menorMedia = media;
         posicaoMenorMedia = i;
     }
    }
    printf("O aluno %s teve a maior nota da P1, sendo %.2f.", a[posicaoNota].nome, maiorNota);
    printf("O aluno %s teve a maior media geral, sendo %.2f.", a[posicaoMaiorMedia].nome, maiorMedia);
    printf("O aluno %s teve a menor media geral, sendo %.2f", a[posicaoMenorNota].nome, menorMedia);
    for(i=0;i<TAM;i++){
        
    }
    
    
    printf("\nA media do numero de paginas dos livros e: %f", media);

    return 0;
}

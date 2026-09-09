#include <stdio.h>

float funcaoMedia(float nota01, float nota02){
    float media = 0, soma = nota01 + nota02;
    media = soma / 2;
    return media;
}

void situacao(float 
media){
    if (media >= 6.0){
        printf("Aprovado");
        return;
    }
    printf("Reprovado");
}

int main(){
    float nota01, nota02, media;
    for (int i = 0; i < 5; i++){
        printf("Digite a primeira nota do aluno %d: ", i+1);
        scanf("%f", &nota01);
        printf("Digite a segunda nota do aluno %d: ", i+1);
        scanf("%f", &nota02);
        media = funcaoMedia(nota01,nota02);
        situacao(media);
        printf("\n%.2f\n", media);
    }
}
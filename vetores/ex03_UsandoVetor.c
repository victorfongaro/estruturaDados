#include <stdio.h>


int main(){
    float vetor[5], media, soma = 0, maior = 0, menor = 0, pesquisa;
    int flag = 0;

    for (int i = 0; i < 5;i++){

        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &vetor[i]);

        if (vetor[i] > maior){
            maior = vetor[i];
        } else if (vetor[i] < menor){
            menor = vetor[i];
        } 
        soma += vetor[i];
    }
    media = soma / 5;

    printf("A soma de 5 numeros reais informados é %.2f\nSua média é %.2f\n", soma, media);
    printf("O maior valor informado é %.2f\nO menor valor informado é %.2f\n", maior, menor);

    printf("\n\n\nOInforme um valor para pesquisar no vetor: ");
    scanf("%f", &pesquisa);

    for (int i = 0; i < 5; i++){
        if (vetor[i] == pesquisa && flag == 0){
            printf("O valor %.2f foi encontrado na posição %d do vetor", pesquisa, i);
            flag = 1;
        }
    }
    
    if (flag == 1){
        printf("O valor %.2f não foi encontrado no vetor", pesquisa);
    }


}
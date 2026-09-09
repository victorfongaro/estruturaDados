#include <stdio.h>


int main(){
    float vetor[10], media, soma = 0, maior = 0, menor, pesquisa, mediaMaiorMedia, somaMaiorMedia = 0;
    int flag = 0, maiorMedia = 0, maiorPesquisa = 0;

    for (int i = 0; i < 10;i++){
        
        printf("Digite o valor do elemento %d: ", i+1);
        scanf("%f", &vetor[i]);
        if (i == 0){
            menor = vetor[0];
        }
        if (vetor[i] > maior){
            maior = vetor[i];
        } else if (vetor[i] < menor){
            menor = vetor[i];
        } 
        soma += vetor[i];
    }
    media = soma / 10;



    printf("A soma de 5 numeros reais informados é %.2f\nSua média é %.2f\n", soma, media);
    printf("O maior valor informado é %.2f\nO menor valor informado é %.2f\n", maior, menor);
    
    
    printf("\nA amplitude entre max e min é %.2f", maior - menor);


    for (int i = 0; i<10;i++){
        if (vetor[i]> media){
            maiorMedia++;
            somaMaiorMedia+=vetor[i];
        }
    }
    mediaMaiorMedia = somaMaiorMedia/maiorMedia;
    
    printf("%d números são maiores que a média, a média entre eles é %.2f\n\n",maiorMedia,mediaMaiorMedia);
    
    
    printf("\n\n\nOInforme um valor para pesquisar no vetor: ");
    scanf("%f", &pesquisa);
    
    
    
    for (int i = 0; i < 10; i++){
        if (vetor[i] > pesquisa){
            maiorPesquisa++;
        }
    }
    
    if (maiorPesquisa == 0){
        printf("Não há valores maiores que a pesquisa");
    } else{
        printf("Há %d valores maiores que a pesquisa", maiorPesquisa);
    }

}
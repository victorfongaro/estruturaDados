// Vector de inteiros simples
// Aloque dinamicamente um vetor de n inteiros usando malloc, 
// preencha com valores lidos do usuário, imprima e libere a memória.
#include <stdio.h>
#include <stdlib.h>


int main(){
    int *ponteiroInt = calloc(5, sizeof(int));
    if (ponteiroInt == NULL){
        return 1;
    }
    for (int i = 0; i <5; i++){
        printf("Digite um número: \n");
        scanf("%d", &(ponteiroInt[i]));

    }

    for (int i = 0; i<5; i++){
        printf("%d ", ponteiroInt[i]);
    }
    printf("\n");
    free(ponteiroInt);

}
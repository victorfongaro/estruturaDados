#include <stdio.h>
#include <stdlib.h>


int main(){
    int* pointer = malloc(1 * sizeof(int));
    int n = 1, qtd;
    printf("Quantos numeros tu quer (min = 1):");
    scanf("%d", &qtd);
    if (n < qtd){
        n = qtd;
        int* temp = realloc(pointer, n* sizeof(int));
        if ( temp == NULL){
            printf("Erro na alocação");
            return 1;
        }

    }
    for (int i = 0; i < n; i++){
        printf("Digite o vetor[%d] ",i+1);
        scanf("%d", &pointer[i]);
    }
    printf("\nvetor[]:");
    for (int i = 0; i < n; i++){
        printf("%d ",pointer[i]);
    }
    printf("\n");
    free(pointer);
    pointer = NULL;
}
#include <stdlib.h>
#include <stdio.h>

int main(){
    int n;

    printf("Digite a quantia de n:");
    scanf("%d", &n);

    int *pointer = malloc(n * sizeof(int));

    if (pointer == NULL){
        printf("\nErro ao alocar memória!!");
        return 1;
    }

    for (int i=0; i < n; i++){
        printf("\nDigite o valor da posição %d do vetor:", i+1 );
        scanf("%d", &pointer[i]);
    }
    printf("\n");
    for (int i=0; i < n; i++){
        printf("%d  ", pointer[i]);
    }
    free(pointer);

    return 0;
}
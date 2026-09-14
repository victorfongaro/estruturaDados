#include <stdio.h>
#include <stdlib.h>

void tipologia(int *endereco,int tipo){
    if (tipo == 0){
        scanf("%d", &(*endereco));
    } else {
        printf("%d", *endereco);
    }
    printf("\n");
}

void iterar(int *ponteiro, int tipo){
    for (int i = 0; i < 5; i++){
        tipologia(&(ponteiro[i]), tipo);
    }

}

int main(){
    int *pointer = calloc(5, sizeof(int));

    iterar(pointer,0);

    iterar(pointer, 1);

    free(pointer);
}
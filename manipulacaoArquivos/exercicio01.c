#include <stdio.h>
#include <stdlib.h>


int main(){
    FILE* arquivo = fopen("arquivo.txt", "w");
    if (arquivo == NULL) return 1;
    int* v = calloc(5, sizeof(int));

    for (int i = 0; i < 5; i++){
        printf("digite o número %d: ", i+1);
        scanf("%d", (v+i));
    }
    for (int i = 0; i < 5; i++){
        fprintf(arquivo, "%d\n" , *(v+i));
    }


    fclose(arquivo);
    free(v);
}
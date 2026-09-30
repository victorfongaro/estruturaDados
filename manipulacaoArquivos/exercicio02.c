#include <stdlib.h>
#include <stdio.h>



int main(){
    int* valor = calloc(1,sizeof(int));
    int soma = 0;
    FILE* arquivo = fopen("arquivo.txt", "r");
    if (arquivo == NULL) return 1;

    while(fscanf(arquivo, "%d", valor) == 1){
        printf("%d\n", *valor);
        soma += *valor;
    }
    free(valor);
    fclose(arquivo);
}
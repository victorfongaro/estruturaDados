#include <stdio.h>
// printf() e scanf()
#include <stdlib.h>
// malloc() e free()
int main(void){
    int n;
    // 1. Ler o tamanho do vetor
    printf("Introduza o tamanho do vetor: ");
    scanf("%d", &n);
    //2. alocar memória a n números inteiros
    int *v = malloc(n * sizeof(int));
    // 3. Verificar se a alocação funcionou
    if (v == NULL)
        return 1;
    // 4. Preencher o vetor
    for (int i = 0; i < n; i++) {
        printf("Informe o elemento %d: ", i);
        scanf("%d", &v[i]);
    }
    // Exibir os elementos do vetor
    printf("\nVetor: ");
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    // 5. Liberar a memória quando não for
    // mais necessária
    free(v);
    v = NULL;
    return 0;
}
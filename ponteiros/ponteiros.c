#include <stdio.h>

typedef struct {
    char name[50];
    float nota01;
    float nota02;
} Aluno;

void alterar(Aluno *aluno, float novaNota) {
    aluno->nota02 = novaNota;
}

int main() {
    Aluno aluno = {"Victor", 9.1 ,1.3};
    float novaNota;
    printf("Nota atual: %.2f\n", aluno.nota01);
    printf("Nota atual 2: %.2f\n", aluno.nota02);
    scanf("%f", &novaNota);
    alterar(&aluno, novaNota);
    printf("Nota após a alteração: %.2f\n", aluno.nota01);
    printf("Nota após a alteração 2: %.2f\n", aluno.nota02);
}


// *p aponta para o valor da variavel
// p aponta para o endereço da variavel
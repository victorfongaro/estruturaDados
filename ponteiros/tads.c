#include <stdio.h>

typedef struct {
    char name[50];
    float nota01;
    float nota02;
} Aluno;

void exibirAluno(Aluno aluno) {
    printf("Nome: %s\n", aluno.name);
    printf("Nota 01: %.2f\n", aluno.nota01);
    printf("Nota 02: %.2f\n", aluno.nota02);
}

float calcularMedia(Aluno aluno) {
    return (aluno.nota01 + aluno.nota02) / 2.0;
}

int verificarAprovacao(Aluno aluno){
    if (aluno.nota01 >= 6.0 && aluno.nota02 >= 6.0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main(){
    Aluno aluno = {"Victor", 9.3, 9.6};

    exibirAluno(aluno);
    printf("Média do aluno %s: %.2f\n", aluno.name, calcularMedia(aluno));


    if (verificarAprovacao(aluno)) {
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }
    return 0;
}
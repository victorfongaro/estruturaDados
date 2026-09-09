#include <stdio.h>


typedef struct {
    char name[50];
    char position[30];
    float salary;
    int anosEmpresa;
} Funcionario;


void printEmployee(Funcionario *funcionario) {
    printf("Nome: %s\n", funcionario->name);
    printf("Cargo: %s\n", funcionario->position);
    printf("Salário: %.2f\n", funcionario->salary);
    printf("Anos na empresa: %d\n", funcionario->anosEmpresa);
}

void mediumSalary(Funcionario *funcionarios, int count) {
    float totalSalary = 0.0;
    for (int i = 0; i < count; i++) {
        totalSalary += funcionarios[i].salary;
    }
    float averageSalary = totalSalary / count;
    printf("Salário médio: %.2f\n", averageSalary);
}

void BiggestSalary(Funcionario *funcionarios, int count) {
    float maxSalary = funcionarios[0].salary;
    int maxIndex = 0;
    for (int i = 1; i < count; i++) {
        if (funcionarios[i].salary > maxSalary) {
            maxSalary = funcionarios[i].salary;
            maxIndex = i;
        }
    }
    printf("O maior salário é de %s, com %.2f\n", funcionarios[maxIndex].name, maxSalary);
}
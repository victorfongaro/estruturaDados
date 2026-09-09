#include <stdio.h>
#include <string.h>

typedef struct {
    char placa[10];
    char marca[20];
    char modelo[30];
    int ano;
    float valor;
} Carro;

void exibirDados(Carro carro){
    printf("Placa: %s\n", carro.placa);
    printf("Marca: %s\n", carro.marca);
    printf("Modelo: %s\n", carro.modelo);
    printf("Ano: %d\n", carro.ano);
    printf("Valor: %.2f\n\n", carro.valor);
}


void exibirMaiorValor(Carro car01, Carro car02){
    if (car01.valor > car02.valor) {
        printf("\nO carro com maior valor é:\n");
        exibirDados(car01);
    } else if (car02.valor > car01.valor) {
        printf("\nO carro com maior valor é:\n");
        exibirDados(car02);
    } else {
        printf("\nOs dois carros possuem o mesmo valor.\n");
    }
}

int main(){
    Carro carro01, carro02;

    strcpy(carro01.placa, "ABC1234");
    strcpy(carro01.marca, "Toyota");
    strcpy(carro01.modelo, "Corolla");
    carro01.ano = 2020;
    carro01.valor = 200000.0;

    strcpy(carro02.placa, "XYZ2345");
    strcpy(carro02.marca, "Honda");
    strcpy(carro02.modelo, "Civic");
    carro02.ano = 2019;
    carro02.valor = 180000.0;

    exibirDados(carro01);
    exibirDados(carro02);

    exibirMaiorValor(carro01, carro02);

    return 0;
}
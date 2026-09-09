#include <stdio.h>

struct Livro {
    int code;
    char title[50];
    char author[50];
    char editory[50];
    float price;
    int numberPages;
};


int main(){

    struct Livro book[3];

    for(int i = 0; i < 3; i++){
        book[i].code = i+1;
        printf("Titulo do livro %d: ", i + 1);
        scanf("%s", book[i].title);

        printf("\nAutor: ");
        scanf("%s", book[i].author);

        printf("\nEditora: ");
        scanf("%s", book[i].editory);

        printf("\nPreco: ");
        scanf("%f", &book[i].price);

        printf("\nNumero de Paginas: ");
        scanf("%d", &book[i].numberPages);

        printf("\nTitulo: %s", book[i].title);
        printf("\nAutor: %s", book[i].author);
        printf("\nEditora: %s", book[i].editory);
        printf("\nPreco: %.2f", book[i].price);
        printf("\nNumero de Paginas: %d\n\n\n", book[i].numberPages);
    }
}
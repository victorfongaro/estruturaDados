#include <stdio.h>
#include <string.h>

struct AAAAIIIIIN{
	char manga_name[50];
	int quantity;
	float peaces;
};

int main(){
	struct AAAAIIIIIN zeDaManga;
	strcpy(zeDaManga.manga_name, "Balacobaco");
	zeDaManga.quantity = 10;
	zeDaManga.peaces = 5.4;


	printf("Manga name: %s\n", zeDaManga.manga_name);
	printf("Quantity: %d\n", zeDaManga.quantity);
	printf("Peaces: %.2f\n", zeDaManga.peaces);
}
#include <stdlib.h>
#include <stdio.h>

int main(){
    int *ponteiroInt = malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++){
        scanf("%d", &ponteiroInt[i]);
    }
    
}
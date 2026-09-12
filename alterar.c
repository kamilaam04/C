#include <stdio.h>

void alterar(int *x){
    *x += 100;
}

int main(){
    int num = 25;

    printf("Valor antes: %d\n", num);
    alterar(&num);
    printf("Valor depois: %d\n", num);

    return 0;
}
#include <stdio.h>

int main(){

    int num = 10;
    int *p = &num;

    printf("Valor de num: %d\n", num);
    printf("Endereço de num: %p\n", &num);
    printf("Valor armazenado no ponteiro: %p\n", p);
    printf("Valor apontado pelo ponteiro: %d\n", *p);

    return 0;
}
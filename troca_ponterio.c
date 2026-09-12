#include <stdio.h>

void troca(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    int A = 20;
    int B = 30;

    printf("\nAntes da troca:\nA = %d\nB = %d\n", A, B);
    troca(&A, &B);
    printf("\nAntes da troca:\nA = %d\nB = %d\n", A, B);

    return 0;
}
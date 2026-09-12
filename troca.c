#include <stdio.h>

int main(){

    int A, B, aux;

    printf("\nDigite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    printf("\nAntes da troca:\nA = %d\nB = %d\n", A, B);

    aux = A;
    A = B;
    B = aux;
    

    printf("\nDepois da troca:\nA = %d\nB = %d\n", A, B);

    return 0;
}
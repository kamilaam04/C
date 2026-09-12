#include <stdio.h>

int soma(int *a, int *b){

    return *a + *b;
}

int main(){
    int A, B;

    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);

    printf("Soma: %d\n", soma(&A, &B));

    return 0;
}
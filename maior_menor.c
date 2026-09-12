#include <stdio.h>

void MaiorMenor(int a, int b, int *maior, int *menor){
    
    if (a > b){
        *maior = a;
        *menor = b;
    } else {
        *menor = a;
        *maior = b;
    }
}

int main(){

    int A, B, maior, menor;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    MaiorMenor(A, B, &maior, &menor);
    printf("\nMaior: %d\n", maior);
    printf("Menor: %d\n", menor);

    return 0;
}
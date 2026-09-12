#include <stdio.h>

int main(){

    float A, P, largura, altura;

    printf("\nLargura: ");
    scanf("%f", &largura);

    printf("Altura: ");
    scanf("%f", &altura);

    A = largura * altura;
    P = largura * 2 + altura * 2;

    printf("\nÁrea: %.2f", A);
    printf("\nPerímetro: %.2f\n", P);

    return 0;
}
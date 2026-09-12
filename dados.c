#include <stdio.h>
#include <string.h>

int main(){

    char nome[20];
    int idade;
    float altura, peso;
    
    printf("\nNome: ");
    fgets(nome, sizeof(nome), stdin);     //entrada para string

    printf("Idade: ");
    scanf("%d", &idade);

    printf("Altura: ");
    scanf("%f", &altura);

    printf("Peso: ");
    scanf("%f", &peso);

    printf("\nNome: %s", nome);
    printf("Idade: %d anos", idade);
    printf("\nAltura: %.2f m", altura);
    printf("\nPeso: %.2f kg\n", peso);

    return 0;
}
#include <stdio.h>

int main(){
    char nome[20];
    int idade;
    float n1, n2, n3, media, soma, maior, menor, diferenca;

    printf("Digite seu nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite a n1: ");
    scanf("%f", &n1);

    printf("Digite a n2: ");
    scanf("%f", &n2);

    printf("Digite a n3: ");
    scanf("%f", &n3);

    soma = n1 + n2 + n3;
    media = soma/3;

    float lista[3] = {n1, n2, n3};

    maior = lista[0];
    menor = lista[0];

    for (int i = 0; i < 3; i++){
        if (lista[i] > maior){
            maior = lista[i];
        } else if (lista[i] < menor){
            menor = lista[i];
        }
    }

    diferenca = maior - menor;

    printf("\nAluno: %sIdade: %d\nMédia: %.2f\nSoma: %.2f\nMaior nota: %.2f\nMenor nota: %.2f\nDiferença: %.2f\n", nome, idade, media, soma, maior, menor, diferenca);

    return 0;
}
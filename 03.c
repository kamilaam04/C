#include <stdio.h>

int main(){
    int num[10], pos = 0, neg = 0, zero = 0, soma = 0, maior, menor;
    float media;

    for(int i = 0; i < 10; i++){
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &num[i]);

        soma += num[i];

        if (num[i] > 0){
            pos++;
        } else if (num[i] < 0){
            neg++;
        } else {
            zero++;
        }

        if (i == 0){
            maior = num[0];
            menor = num[0];

        if (num[i] > maior){
            maior = num[i];
        } 
        if (num[i] < menor){
            menor = num[i];
        }

    media = soma/10.00;

    printf("Positivos: %d\nNegativos: %d\nZeros: %d\nSoma: %d\nMédia: %.2f\nMaior: %d\nMenor: %d\n", pos, neg, zero, soma, media, maior, menor);

    return 0;
}
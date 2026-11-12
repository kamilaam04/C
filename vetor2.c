#include <stdio.h>

int main(){
    int vetor[10], num, soma = 0, menor, maior; 

    for (int i = 0; i < 10; i++){
        scanf("%d", &num);
        vetor[i] = num;
        soma += num;

        if (i == 0){
            maior = vetor[0];
            menor = vetor[0];
        }

        if (vetor[i] > maior){
            maior = vetor[i];
        }
            if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    float media = soma / 10.00;

    printf("\nVetor: ");
    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nVetor Invertido: ");
    for (int i = 9; i >= 0; i--){
        printf("%d ", vetor[i]);
    }


    printf("\n\nmaior = %d\nmenor = %d\nmédia = %.2f\n", maior, menor, media);

    return 0;
}


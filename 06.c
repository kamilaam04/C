#include <stdio.h>

int BuscaLinear(int vetor[], int tamanho, int alvo){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == alvo){
            return i;
        }
    }
    return -1;
}

int main(){
    int tamanho, alvo, resultado;
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor: ");

    for (int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nEscolha o alvo: ");
    scanf("%d", &alvo);

    resultado = BuscaLinear(vetor, tamanho, alvo);

    if (resultado != -1){
        printf("Alvo encontrado na posição %d\n", resultado);
    } else {
        printf("Alvo não encontrado");
    }
    return 0;
}
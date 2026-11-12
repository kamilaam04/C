#include <stdio.h>

int BuscaBinaria(int vetor[], int tamanho, int alvo, int *ite){
    int inicio = 0, fim = tamanho - 1, meio;

    while(fim >= inicio){
        *ite += 1;
        meio = (inicio + fim) /2;

        if (alvo > vetor[meio]){
            inicio = meio + 1;
        } else if (alvo < vetor[meio]){
            fim = meio - 1;
        } else {
            return meio;
        }
    }
    return -1;
}

int main(){
    int vetor[10] = {6, 12, 23, 68, 70, 74, 80, 86, 99, 120}, resultado, alvo, ite = 0;

    for (int i = 0; i < 10; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nDigite o alvo: ");
    scanf("%d", &alvo);

    resultado = BuscaBinaria(vetor,  10, alvo, &ite);

    if (resultado != -1){
        printf("Alvo encontrado na posição %d\nIterações: %d\n", resultado, ite);
    } else {
        printf("Resultado não encontrado\n");
    }

        return 0;
}

#include <stdio.h>

int busca_binaria(int vetor[], int tamanho, int elemento){
    int ini = 0, fim = tamanho - 1, meio;

    while (fim >= ini){
        meio = (fim + ini) / 2;

        if (vetor[meio] < elemento){
            ini = meio + 1;
        } else if (vetor[meio] > elemento){
            fim = meio - 1;
        } else { 
            return meio;
        }
    }
    return -1;
}

int main(){
    int vetor[] = {3, 7, 12, 16, 18, 25, 29, 34, 36, 40, 43, 47, 52, 56, 61, 65, 68, 70, 74, 81, 83, 88, 91, 95, 99};
    int tamanho = 25, elemento, resultado;

    printf("Digite o elemento: ");
    scanf("%d", &elemento);

    resultado = busca_binaria(vetor, tamanho, elemento);

    if (resultado != -1){
        printf("Elemento %d encontrado na posição %d\n", elemento, resultado);
    } else {
        printf("Elemento não encontrado no vetor\n");
    }
    return 0;
}

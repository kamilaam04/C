#include <stdio.h>

int busca_linear(int vetor[], int tamanho, int elemento){
    for (int i = 0; i < tamanho; i++){
        if (vetor[i] == elemento){
            return i;
        }
    }
    return -1;
}

int main(){

    int elemento, resultado, tamanho = 25;
    int vetor[] = {47, 12, 83, 29, 61, 5, 74, 38, 91, 16, 53, 67, 24, 88, 31, 9, 56, 72, 43, 19, 95, 36, 64, 27, 80};

    printf("Digite o elemento: ");
    scanf("%d", &elemento);

    resultado = busca_linear(vetor, tamanho, elemento);

    if (resultado != -1){
        printf("Elemento %d encontrado na posição %d\n", elemento, resultado);
    } else {
        printf("Elemento não encontrado no vetor\n");
    }

    return 0;
}
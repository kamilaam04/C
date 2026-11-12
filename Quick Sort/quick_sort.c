#include <stdio.h>

int particionar(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int esquerda = inicio;
    int direita = fim;
    while (esquerda < direita) {
        while (esquerda < direita && v[esquerda] <= pivo) esquerda++;
        v[direita] = v[esquerda];
        while (esquerda < direita && v[direita] >= pivo) direita--;
        v[esquerda] = v[direita];
    }
    v[esquerda] = pivo;
    return esquerda;
}

void quick_sort(int v[], int inicio, int fim) {
    if (inicio >= fim){
        return;
    }
    int indice_pivo = particionar(v, inicio, fim);
    quick_sort(v, inicio, indice_pivo - 1);
    quick_sort(v, indice_pivo + 1, fim);
}

int main() {
    int v[] = {5, 2, 0, -1, 3, 1, 4};
    quick_sort(v, 0, 6);
    
    for (int i = 0; i < 7; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    return 0;
}
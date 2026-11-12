#include <stdio.h>

char particionar(char v[], int inicio, int fim) {
    char pivo = v[fim];
    char esquerda = inicio;
    char direita = fim;
    while (esquerda < direita) {
        while (esquerda < direita && v[esquerda] <= pivo) esquerda++;
        v[direita] = v[esquerda];
        while (esquerda < direita && v[direita] >= pivo) direita--;
        v[esquerda] = v[direita];
    }
    v[esquerda] = pivo;
    return esquerda;
}

void quick_sort(char v[], int inicio, int fim) {
    if (inicio >= fim){
        return;
    }
    char indice_pivo = particionar(v, inicio, fim);
    quick_sort(v, inicio, indice_pivo - 1);
    quick_sort(v, indice_pivo + 1, fim);
}

int main() {
    char v[] = {"banana"};
    quick_sort(v, 0, 5);
    
    printf("%s\n", v);
    return 0;
}
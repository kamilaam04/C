#include <stdio.h>

void insertionSort(int v[], int n) {
    int contador = 0;
    for (int i = 1; i < n; i++) {
        int key = v[i];
        int j = i - 1;
        // Move os elementos maiores que a chave para uma posição à frente
        while (j >= 0 && v[j] > key) {
            contador++;
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
    }

    //printf("Qtd de comparações: %d\n", contador);
}

int main(){

    int v[] = {18, 72, 4, 91, 36, 55, 13, 84, 7, 63}, t = 10;
    insertionSort(v, t);

    for (int i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
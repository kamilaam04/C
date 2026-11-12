#include <stdio.h>

void selectionSort(int v[], int n) {
    int contador = 0;
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        // Encontra o menor elemento na parte não ordenada
        for (int j = i+1; j < n; j++){
            contador++;
            if (v[j] < v[min_idx])
                min_idx = j;
        }
        // Troca o menor elemento com o primeiro elemento 
        if (min_idx != i) {
            int temp = v[min_idx];
            v[min_idx] = v[i];
            v[i] = temp;
        }
    }
    //printf("Qtd de comparações: %d\n", contador);
}

int main(){
    int v[] = {18, 72, 4, 91, 36, 55, 13, 84, 7, 63}, t = 10;
    selectionSort(v, t);

    for (int i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}
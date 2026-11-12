#include <stdio.h>

void bubbleSort(int v[], int n) {
    int contador = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            contador++;
            if (v[j] > v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
    //printf("Qtd de comparações: %d\n", contador);
}

int main(){
    int v[] = {18, 72, 4, 91, 36, 55, 13, 84, 7, 63}, t = 10;
    bubbleSort(v, t);

    for (int i = 0; i < t; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main(){
    int tamanho;

    scanf("%d", &tamanho);

    int matriz[tamanho][tamanho], num, soma = 0, diagonal = 0;

    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            scanf("%d", &num);
            matriz[i][j] = num;
            soma += num;
            if (j == i){
                diagonal += matriz[i][j];
            }
        }
    }

    printf("\nMatriz: \n");
    for (int i = 0; i < tamanho; i++){
        for (int j = 0; j < tamanho; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma Total: %d\nSoma da diagonal: %d\n", soma, diagonal);

}
#include <stdio.h>

int main(){

    int matriz[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };

    int soma = 0;

    for (int i = 0; i < 4; i++){
        for (int j =0; j < 4; j++){
            soma += matriz[i][j];
        }
    }

    printf("\nSoma = %d\n", soma);

    return 0;
}
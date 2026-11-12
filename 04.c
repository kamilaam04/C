#include <stdio.h>

int main(){
    int matriz[4][4], diagonal_p = 0, diagonal_s = 0, soma, maior, menor, par = 0, imp = 0;

    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        
            soma += matriz[i][j];

            if (matriz[i][j] % 2 == 0){
                par++;
            } else {
                imp++;
            }

            if (i == j){
                diagonal_p += matriz[i][j];
            }
            if (i + j == 3){
                diagonal_s += matriz[i][j];
            }

            if (i == 0){
                maior = matriz[0][0];
                menor = matriz[0][0];
            }
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor){
                menor = matriz[i][j];
            }
            
        }
    }

    printf("\nMatriz: \n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma: %d\nDiagonal principal: %d\nDiagonal secundária: %d\nMaior: %d\nMenor: %d\nPares: %d\nImpares: %d\n\n", soma, diagonal_p, diagonal_s, maior, menor, par, imp);
    return 0;
}
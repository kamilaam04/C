#include <stdio.h>

int main(){

    int matriz[5][5] = {
        {5, 6, 4, 3, 3},
        {5, 7, 8, 51, 3},
        {1, 4, 2, 7, 0},
        {5, 3, 76, 6, 3},
        {0, 8, 9, 332, 53}
    }, maior = matriz[0][0];

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("\nMaior número: %d\n", maior);

    return 0;
}
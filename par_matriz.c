#include <stdio.h>

int main(){

    int matriz[5][5] = {
        {5, 6, 4, 3, 3},
        {5, 7, 8, 1, 3},
        {1, 4, 2, 7, 0},
        {5, 3, 6, 6, 3},
        {0, 8, 9, 2, 3}
    }, pares = 0;

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            if (matriz[i][j] % 2 == 0){
                pares += 1;
            }
        }
    }

    printf("\nExistem %d números pares na matriz\n", pares);

    return 0;
}
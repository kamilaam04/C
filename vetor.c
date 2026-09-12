#include <stdio.h>

int main(){

    int vetor[10], num;

    for (int i = 0; i < 10; i++){
        printf("Digite um número: ");
        scanf("%d", &num);
        vetor[i] = num;
    }

    printf("\nElementos do vetor:\n");
    for (int j = 0; j < 10; j++){
        printf("%d ", vetor[j]);
    }
    printf("\n");
    return 0;
}
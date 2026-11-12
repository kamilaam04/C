#include <stdio.h>

int main(){
    
    int vetor[20] = {4, 3, 78, 46, 5, 34, 6, 22, 56, 78, 23, 41, 56, 7, 44, 9, 21, 5, 34, 33}, elemento;

    printf("Digite um elemento: ");
    scanf("%d", &elemento);

    for (int i = 0; i < 20; i++){
        if (vetor[i] == elemento){
            return printf("Elemento %d encontrado encontrado na posição %d\n", elemento, i);
        }
    }
    return printf("Elemento não encontrado no vetor\n");

    return 0;
}
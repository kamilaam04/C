#include <stdio.h>

int main(){

    int num;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d é positivo\n", num);
    } else if (num < 0){
        printf("%d é negativo\n", num);
    } else {
        printf("O número é zero\n");
    }
    return 0;
}
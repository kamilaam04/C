#include <stdio.h>

int main(){

    int num1, num2;

    printf("Primeiro número: ");
    scanf("%d", &num1);

    printf("Segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2){
        printf("O maior número é %d\n", num1);
    } else if (num1 < num2) {
        printf("O maior número é %d\n", num2);
    } else {
        printf("São iguais\n");
    }

    return 0;
}
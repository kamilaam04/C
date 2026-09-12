#include <stdio.h>

int main(){

    float num1, num2, soma, subt, mult, div;
    int resto;

    printf("\nDigite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    soma = num1 + num2;
    subt = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    resto = (int)num1 % (int)num2;

    printf("\nSoma: %.2f", soma);
    printf("\nSubtração: %.2f", subt);
    printf("\nMultiplicação: %.2f", mult);
    printf("\nDivisão: %.2f", div);
    printf("\nResto: %d\n", resto);

    return 0;
}
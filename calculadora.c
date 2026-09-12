#include <stdio.h>

int main()
{
    int opcao;
    float num1;
    float num2;
    float resultado;
    
    printf("\nCalculadora\n\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    
    printf("\nDigite o primeiro número: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo número: ");
    scanf("%f", &num2);

    if (opcao == 1){
        resultado = num1 + num2;
        printf("\n%f + %f = %.2f\n", num1, num2, resultado);
    } else if (opcao == 2){
        resultado = num1 - num2;
        printf("\n%f - %f = %.2f\n", num1, num2, resultado);
    } else if (opcao == 3){
        resultado = num1 * num2;
        printf("\n%f * %f = %.2f\n", num1, num2, resultado);
    } else if (opcao == 4){
        resultado = num1 / num2;
        printf("\n%f / %f = %.2f\n", num1, num2, resultado);
    } else {
        printf("\nOpção inválida");
    }

    return 0;
}
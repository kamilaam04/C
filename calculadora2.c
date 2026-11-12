#include <stdio.h>

void menu(){
    printf("\n-----Operação-----");
    printf("\n\n+\n-\n*\n/\n\n");
}

float adicao(float n1, float n2){
    return n1 + n2;
}

float sub(float n1, float n2){
    return n1 - n2;
}

float mult(float n1, float n2){
    return n1 * n2;
}

float div(float n1, float n2){
    return n1 / n2;
}

int main(){
    float n1, n2, resultado;
    char opcao;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

    menu();

    printf("Escolha uma opção: ");
    scanf(" %c", &opcao);

    switch (opcao){
        case '+':
            resultado = adicao(n1, n2);
            printf("\n%.2f + %.2f = %.2f\n", n1, n2, resultado);
            break;
        case '-':
            resultado = sub(n1, n2);
            printf("\n%.2f - %.2f = %.2f\n", n1, n2, resultado);
            break;
        case '*':
            resultado = mult(n1, n2);
            printf("\n%.2f * %.2f = %.2f\n", n1, n2, resultado);
            break;
        case '/':
            resultado = div(n1, n2);
            printf("\n%.2f / %.2f = %.2f\n", n1, n2, resultado);
            break;
        default:
            printf("\nOpção inválida!\n");
    }

    return 0;

}
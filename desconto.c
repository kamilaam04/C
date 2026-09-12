#include <stdio.h>

int main(){

    float pre, per, des, novo;

    printf("\nPreço: ");
    scanf("%f", &pre);

    printf("Percentual de desconto: ");
    scanf("%f", &per);

    des = pre * per / 100;
    novo = pre - des;

    printf("\nValor do desconto: R$ %.2f", des);
    printf("\nPreço final: R$ %.2f\n", novo);
    return 0;
}
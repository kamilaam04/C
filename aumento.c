#include <stdio.h>

int main(){

    float sal, per, aum, novo;

    printf("\nSalário: ");
    scanf("%f", &sal);

    printf("Percentual de aumento: ");
    scanf("%f", &per);

    aum = sal * per / 100;
    novo = sal + aum;

    printf("\nValor do aumento: R$ %.2f", aum);
    printf("\nNovo salário: R$ %.2f\n", novo);

    return 0;
}
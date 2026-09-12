#include <stdio.h>

int main(){

    float C, F;

    printf("\nDigite a temperatura em Celsius: ");
    scanf("%f", &C);

    F = C * 9/5 + 32;

    printf("\nTemperatura em Fahrenheit: %.2f\n", F);

    return 0;
}
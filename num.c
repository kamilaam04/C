#include <stdio.h>

int main(){

    int  num, ant, suc, dob, tri, quad;

    printf("\nDigite um número: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;
    dob = num * 2;
    tri = num * 3;
    quad = num * num;

    printf("\nAntecessor: %d", ant);
    printf("\nSucessor: %d", suc);
    printf("\nDobro: %d", dob);
    printf("\nTriplo: %d", tri);
    printf("\nQuadrado: %d\n", quad);

    return 0;
}
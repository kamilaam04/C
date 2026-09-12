#include <stdio.h>

int main(){

    int seg, min, hora;

    printf("\nDigite a quantidade de segundos:  ");
    scanf("%d", &seg);

    hora = seg / 3600;
    min = (seg - 3600 * hora) / 60;
    seg = seg - 3600 * hora - 60 * min;

    printf("\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", hora, min, seg);

    return 0;
}
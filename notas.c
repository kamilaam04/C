#include <stdio.h>

int main(){

    float nota1, nota2, media;
    char *resultado;

    printf("Nota 1: ");
    scanf("%f", &nota1);

    printf("Nota 2: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7){
        resultado = "Aprovado";
    } else if (media >= 5) {
        resultado = "Recuperação"; 
    } else {
        resultado = "Reprovado";
    }

    printf("\nMédia: %.2f\nSituação: %s\n", media, resultado);

    return 0;
}
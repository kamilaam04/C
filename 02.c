#include <stdio.h>

int main(){
    float nota;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    if (0 <= nota && nota <= 10){
        if (nota < 4){
            printf("Reprovado\n");
        } else if (4 <= nota && nota < 6){
            printf("Recuperação\n");
        } else if (6 <= nota && nota <= 8){
            printf("Aprovado\n");
        } else {
            printf("Aprovado com destaque\n");
        }
    } else {
        printf("Nota inválida\n");
    }

    return 0;
}
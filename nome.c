#include <stdio.h>

int main()
{
    char nome[50];
    printf("Digite seu nome: ");
    scanf("%s", nome);    // não lê espaços, para fazer isso use fgets

    printf("Olá, %s!\n", nome);
    return 0;
}
#include <stdio.h>

int quadrado(int n){
    return n*n;
}

int main(){
    int num, qua;
    printf("Digite um número: ");
    scanf("%d", &num);
    qua = quadrado(num);
    printf("O quadrado de %d é %d\n", num, qua);
    return 0;
}
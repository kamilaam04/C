#include <stdio.h>

int main(){
    int soma = 0, num = 1;

    while (num > 0){
        scanf("%d", &num);
        soma += num;
    }
    printf("Soma = %d\n", soma);
    return 0;
}
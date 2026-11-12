#include <stdio.h>

int contaDesordemREC(int v[], int tam){
    if (tam <= 1){
        return 0;
    }
    if (v[tam-1] < v[tam-2]){
        return 1 + contaDesordemREC(v, tam-1);
    }
    return contaDesordemREC(v, tam-1);
}

int main(){
    int v[] = {5, 4, 3, 2, 1}, n = 5, r = contaDesordemREC(v, n);
    printf("%d\n", r);
    return 0;
}
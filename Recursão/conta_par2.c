#include <stdio.h>

int contaParesREC(int a, int b){
    if (a > b){
        return 0;
    }
    if (b % 2 == 0){
        return 1 + contaParesREC(a, b - 1);
    }
    return contaParesREC(a, b - 1);
}

int main(){
    int a = 2, b = 8, r = contaParesREC(a, b);
    printf("%d\n", r);
    return 0;
}
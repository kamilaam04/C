#include <stdio.h>

int fatorial(int n){
    int resultado = 1;
    for (int i = 1; i <= n; i++){
        resultado *= i;
    }

    return resultado;
}

int main(){
    int n = 6;
    int resultado = fatorial(n);

    printf("%d! = %d\n", n, resultado);

    return 0;
}
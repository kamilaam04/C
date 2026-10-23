#include <stdio.h>

int fatorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * fatorial(n - 1);
}

int main(){
    int resultado, n = 5;
    resultado = fatorial(n);

    printf("%d! = %d\n", n, resultado);

    return 0;
}
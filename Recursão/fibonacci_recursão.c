#include <stdio.h>

int fibonacci(int n){
    if (n == 1){
        return 0;
    }
    if (n == 2){
        return 1;
    }

    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    int pos = 6;
    int resultado = fibonacci(pos);

    printf("%d está na posição %d da sequência de Fibonacci\n", resultado, pos);

    return 0;
}
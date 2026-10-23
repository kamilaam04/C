#include <stdio.h>

int mult(int a, int b){
    if (b == 0){
        return 0;
    }
    return a + mult(a, b-1);
}

int main(){
    int a = 8, b = 9;
    int resultado = mult(a, b);
    printf("%d x %d = %d\n", a, b, resultado);
    return 0;
}
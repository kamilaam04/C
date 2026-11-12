// O caso base será quando o "a" for menor que o "b", retornando o "a", sendo ele o próprio resto.
// O caso recursivo será retornar o resto de "a - b" por "b".

#include <stdio.h>

int restoREC(int a, int b){
    if (a < b){
        return a;
    }
    return restoREC(a - b, b);
}

int main(){
    int a = 16, b = 9, r = restoREC(a, b);
    printf("%d\n", r);
    return 0;
}
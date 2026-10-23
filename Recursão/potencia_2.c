#include <stdio.h>

int potencia_2(int n){
    if (n == 1){
        return 1;
    }
    if (n % 2 == 1){
        return 0;
    }
    return potencia_2(n/2);
}

int main(){
    int a = 32;
    printf("%d\n", potencia_2(a));

    return 0;
}
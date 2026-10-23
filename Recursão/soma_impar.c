#include <stdio.h>

int soma_impar(int n){
    if (n == 1){
        return 1;
    }
    if (n % 2 != 0){
        return n + soma_impar(n-1);
    }
    return soma_impar(n-1);
}

int main(){
    int n = 10, r = soma_impar(n);

    printf("%d\n", r);
    return 0;
}
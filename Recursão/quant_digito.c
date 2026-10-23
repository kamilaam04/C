#include <stdio.h>

int digitos(int n){
    if (n < 10){
        return 1;
    }
    return 1 + digitos(n/10);
}

int main(){
    int n = 18;

    printf("%d tem %d digitos\n", n, digitos(n));
}
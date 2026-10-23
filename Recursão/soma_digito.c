#include <stdio.h>

int soma_digito(int n){
    if (n < 10){
        return n;
    }
    return n%10 + soma_digito(n/10);
}

int main(){
    int a = 1234;
    printf("%d\n", soma_digito(a));

    return 0;
}
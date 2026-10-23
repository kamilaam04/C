#include <stdio.h>

int maior_digito(int n){

    if (n < 10){
        return n;
    }

    if (maior_digito(n/10) < n%10){
        return n%10;
    }
    return maior_digito(n/10);
    
}

int main(){
    int a = 5841;
    printf("%d\n", maior_digito(a));

    return 0;
}
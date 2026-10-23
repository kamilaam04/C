#include <stdio.h>

void crescente(int n){
    if (n==0){
        return;
    }

    printf("%d ", n);
    crescente(n-1);
    printf("%d ", n);
}

int main(){
    crescente(3);

    return 0;
}
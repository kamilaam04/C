#include <stdio.h>

void contagem(int n){
    if (n == 0){
        return;
    }

    contagem(n - 1);
    printf("%d ", n);    
    
}

int main(){
    contagem(10);
    printf("\n");

    return 0;
}
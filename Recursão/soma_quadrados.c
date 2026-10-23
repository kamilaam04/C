#include <stdio.h>

int somaQ(int n){
    if (n == 1){
        return 1;
    }
    return n*n + somaQ(n-1);
}

int main(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    printf("%d\n", somaQ(n));
}
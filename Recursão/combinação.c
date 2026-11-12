// O caso base será quando k for igual a zero ou k for igual a n, retornando 1.
// O caso recursivo será a própria relação de Pascal, retornando a combinação de (n-1, k-1) mais a combinação de (n-1,k)

#include <stdio.h>

int combinacaoREC(int n, int k){
    if (k == 0 || k == n){
        return 1;
    }
    return combinacaoREC(n-1, k-1) + combinacaoREC(n-1,k);
}

int main(){
    int a = 6, b = 3, r = combinacaoREC(a, b);
    printf("%d\n", r);
    return 0;
}
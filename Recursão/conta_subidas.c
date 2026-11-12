#include <stdio.h>

int contaSubidasREC(int v[], int n){
    if (n == 1){
        return 0;
    }
    if (v[n-1] > v[n-2]){
        return 1 + contaSubidasREC(v, n-1);
    }
    return contaSubidasREC(v, n-1);
}

int main(){
    int v[] = {1, 3, 2, 5, 6}, n = 5, r = contaSubidasREC(v, n);
    printf("%d\n", r);
    return 0;
}
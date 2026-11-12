#include <stdio.h>

int somaPosParesREC(int v[], int n){
    if (n == 1){
        return v[0];
    }
    if ((n-1) % 2 == 0){
        return v[n-1] + somaPosParesREC(v, n-1);
    }
    return somaPosParesREC(v, n-1);
}

int main(){
    int v[] = {6, 1, 3, 9, 2}, n = 5, r = somaPosParesREC(v, n);
    printf("%d\n", r);
    return 0;
}
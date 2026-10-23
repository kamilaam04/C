#include <stdio.h>

int pares(int v[], int t){
    if (t == 0){
        return 0;
    }
    if (v[t-1] % 2 == 1){
        return pares(v, t-1);
    }
    return 1 + pares(v, t-1);
}

int main(){
    int v[] = {9, 7, 3, 5}; 
    int t = 4, r = pares(v, t);
    printf("%d\n", r);

    return 0;
}
#include <stdio.h>

int menor(int v[], int t){
    if (t == 1){
        return v[0];
    }
    if (v[t-1] < menor(v, t-1)){
        return v[t-1];
    }
    return menor(v, t-1);
}

int main(){
    int v[] = {8, 2, 3, 0}; 
    int t = 4, r = menor(v, t);
    printf("%d\n", r);

    return 0;
}
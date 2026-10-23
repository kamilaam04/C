#include <stdio.h>

int busca_linear(int v[], int t, int a){
    if (t == 0){
        return -1;
    }
    if (a == v[t-1]){
        return t-1;
    }
    return busca_linear(v, t-1, a);
}

int main(){
    int v[] = {8, 2, 3, 0}; 
    int t = 4, a = 9, r = busca_linear(v, t, a);
    printf("%d\n", r);

    return 0;
}
#include <stdio.h>

int ordem_cres(int v[], int t){
    if (t <= 1){
        return 1;
    }
    int r = ordem_cres(v, t-1);
    if (v[t-1] < r){
        return 0;
    } 
    return r;
}

int main(){
    int v[] = {8, 2, 3, 9}; 
    int t = 4, r = ordem_cres(v, t);
    printf("%d\n", r);

    return 0;
}
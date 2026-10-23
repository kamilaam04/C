#include <stdio.h>

int produto_vetor(int v[], int t){
    if (t == 0){
        return 1;
    }
    return v[t - 1] * produto_vetor(v, t-1);
}

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int t = 10, r = produto_vetor(v, t);
    printf("%d\n", r);

    return 0;
}
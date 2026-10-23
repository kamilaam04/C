#include <stdio.h>

int soma_vetor(int v[], int n){
    if (n == 0){
        return 0;
    }
    return v[n-1] + soma_vetor(v, n-1);
}

int main(){
    int v[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int t = 10, r = soma_vetor(v, t);
    printf("%d\n", r);

    return 0;
}
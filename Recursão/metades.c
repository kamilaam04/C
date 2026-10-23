#include <stdio.h>

int metades(int n){
    if (n == 1){
        return 0;
    }
    return 1 + metades(n/2);
}

int main(){
    int a = 20;
    printf("%d\n", metades(a));

    return 0;
}
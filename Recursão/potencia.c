#include <stdio.h>
#include <math.h>

int potencia(int b, int e){
    if (e == 0){
        return 1;
    }

    return b * pow(b, e-1);
}

int main(){
    int b = 2, e = 3;
    int r = potencia(b, e);
    printf("%d^%d = %d\n", b, e, r);

    return 0;
}
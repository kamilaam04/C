#include <stdio.h>

int conta_digito(int num, int d){
    if (num < 10){
        if (num == d){
            return 1;
        }
        return 0;
    }
    if (num%10 == d){
        return 1 + conta_digito(num/10, d);
    }
    return conta_digito(num/10, d);
}

int main(){
    int a = 5000, b = 0;
    printf("%d\n", conta_digito(a, b));

    return 0;
}
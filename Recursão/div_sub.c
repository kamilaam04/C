#include <stdio.h>

int div_sub(int a, int b){
    if (a < b){
        return 0;
    }
    return 1 + div_sub(a - b, b);
}

int main(){
    int a = 16, b = 4, r = div_sub(a, b);
    printf("%d / %d = %d\n", a, b, r);
    return 0;
}
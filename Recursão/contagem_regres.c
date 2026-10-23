#include <stdio.h>

void cont(int n){
    if (n == 0 ){
        printf("FIM\n");
        return;
    }
    
    printf("%d ", n);
    cont(n - 1);
}

int main(){
    cont(10);

    return 0;
}
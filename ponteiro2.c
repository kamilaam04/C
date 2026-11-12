#include <stdio.h>

int main(){

    int x;
    int *p;

    x = 20;
    p = &x;

    printf("x = %d\n*p = %d\n\n", x, *p);

    *p = 40;

    printf("x = %d\n*p = %d\n\n", x, *p);

    return 0;
}
#include <stdio.h>

void oposto(char v[], int t){
    if (t == 0){
        return;
    }
    printf("%c", v[t-1]);

    return oposto(v, t-1);
}

int main(){
    char s[] = "roma";
    int t = 4;

    oposto(s, t);

    return 0;
}
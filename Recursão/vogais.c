#include <stdio.h>

int vogais(char v[], int t){
    if (t == 0){
        return 0;
    }
    if (v[t-1] == 'a' || v[t-1] == 'e' || v[t-1] == 'i' || v[t-1] == 'o' || v[t-1] == 'u'){
        return 1 + vogais(v, t-1);
    }
    return vogais(v, t-1);
}

int main(){
    char s[] = "aaeiou";
    int t = 6;

    printf("%d\n", vogais(s, t));

    return 0;
}
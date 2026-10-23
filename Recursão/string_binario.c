#include <stdio.h>

int ehBinario(char v[], int t){
    if (t == 0){
        return 1;
    }
    if (v[t-1] != '1' && v[t-1] != '0'){
        return 0;
    }
    return ehBinario(v, t-1);
}

int main(){
    char s[] = "01010110";
    int t = 8, r = ehBinario(s, t);

    printf("%d\n", r);

    return 0;
}
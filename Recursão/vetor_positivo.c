#include <stdio.h>

int todos_pos(int v[], int t){
    if (t == 0){
        return 1;
    }
    if (v[t-1] <= 0){
        return 0;
    } 
    return todos_pos(v, t-1);
}

int main(){
    int v[] = {8, 2, 3, 9}; 
    int t = 4, r = todos_pos(v, t);
    printf("%d\n", r);

    return 0;
}
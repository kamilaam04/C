#include <stdio.h>

int uniao(int v1[], int n1, int v2[], int n2, int dest[]) {

    int i1 = 0;
    int i2 = 0;
    int i = 0;

    while (i1 < n1 && i2 < n2) {

        if (v1[i1] < v2[i2]) {
            dest[i] = v1[i1];
            i1++;
        }
        else if (v1[i1] > v2[i2]){
            dest[i] = v2[i2];
            i2++;
        } else {
            dest[i] = v1[i1];
            i1++;
            i2++;
        }
        i++;
    }

    while (i1 < n1) {
        dest[i] = v1[i1];
        i1++;
        i++;
    }
    
    while (i2 < n2) {
        dest[i] = v2[i2];
        i2++;
        i++;
    }

    return i;
}

int main(){
    int v1[] = {1, 3, 5, 7}, v2[] = {2, 3, 6, 7, 9}, n1 = 4, n2 = 5;
    int v3[n1+n2];

    int n3 = uniao(v1, n1, v2, n2, v3);

    for (int i = 0; i < n3; i++){
        printf("%d ", v3[i]);
    }
    printf("\n");
    printf("(%d)\n", n3);

    return 0;
}
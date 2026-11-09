#include <stdio.h>

void merge(int v1[], int n1, int v2[], int n2, int dest[]);

void merge_sort(int v[], int n) {

    if (n < 2){ 
        return;
    }

    int meio = n/2;
    int n1 = meio;
    int v1[n1];

    for (int i = 0; i < n1; i++) {
        v1[i] = v[i];
    }

    int n2 = n-meio;
    int v2[n2];

    for (int i = 0; i < n2; i++) {
        v2[i] = v[meio+i];
    }

    merge_sort(v1, n1);
    merge_sort(v2, n2);
    merge(v1, n1, v2, n2, v);
}

void merge(int v1[], int n1, int v2[], int n2, int dest[]) {

    int i1 = 0;
    int i2 = 0;
    int i = 0;

    while (i1 < n1 && i2 < n2) {

        if (v1[i1] > v2[i2]) {      //só alterar o sinal aqui
            dest[i] = v1[i1];
            i1++;
        }
        else {
            dest[i] = v2[i2];
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
}

int main(){
    int v[] = {5, 8, 4, 34, 78, 123, 117, 3, 11, 8}, n = 10;
    
    printf("Vetor original: ");
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");

    merge_sort(v, n);

    printf("Vetor ordenado: ");
    for (int i = 0; i < n; i++){
        printf("%d ", v[i]);
    }
    printf("\n");
    
    return 0;
}
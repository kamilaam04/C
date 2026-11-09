#include <stdio.h>
#include <string.h>

void merge(char v1[], int n1, char v2[], int n2, char dest[]);

void merge_sort(char v[], int n) {
    if (n < 2) return;
    int meio = n/2;
    int n1 = meio;
    char v1[n1];
    for (int i = 0; i < n1; i++) {
        v1[i] = v[i];
    }
    int n2 = n-meio;
    char v2[n2];
    for (int i = 0; i < n2; i++) {
        v2[i] = v[meio+i];
    }
    merge_sort(v1, n1);
    merge_sort(v2, n2);
    merge(v1, n1, v2, n2, v);
}

void merge(char v1[], int n1, char v2[], int n2, char dest[]) {
    int i1 = 0;
    int i2 = 0;
    int i = 0;
    while (i1 < n1 && i2 < n2) {
        if (v1[i1] < v2[i2]) {
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

int main() {
    char s[] = "ordenacao";
    merge_sort(s, strlen(s));
    printf("%s\n", s);          
    return 0;
}
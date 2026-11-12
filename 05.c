#include <stdio.h>

void ordenar(int *a, int *b){
    if (a < b){
        int aux;
        aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(){
    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("\nAntes:\nn1 = %d\nn2 = %d\n\n",n1, n2);
    ordenar(&n1, &n2);
    printf("\nDepois:\nn1 = %d\nn2 = %d\n\n",n1, n2);

    printf("Endereço n1: %p\nEndereço n2: %p\n", &n1, &n2);
    return 0;
}
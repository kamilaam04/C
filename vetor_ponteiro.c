#include <stdio.h>

int main(){

int vetor[10], num;
int *p = vetor;

for (int j = 0; j < 10; j++){
    scanf("%d", &num);
    *(p + j) = num;
}

printf("\nElementos do Vetor: \n");

for (int i = 0; i < 10; i++){
    printf("%d ", *(p + i));
}
printf("\n");

return 0;

}
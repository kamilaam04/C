#include <stdio.h>
#include <math.h>

int main(){
    int num, primo = 1;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num < 2){
        primo = 0;
    }

    for (int i = 2; i <= pow(num, 0.5); i++){
        if (num % i == 0){
            primo = 0;
        }
    }

    if (primo == 1){
        printf("%d é Primo\n", num);
    } else {
        printf("%d não é Primo\n", num);
    }
    
    return 0;
}
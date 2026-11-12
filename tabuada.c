#include <stdio.h>

int main(){
	int num, mult;
	
	printf("Escolha um número: ");
	scanf("%d", &num);

	for (int i = 0; i <= 10; i++){
		mult = i * num;
		printf("%d * %d = %d", i, num, mult);
		printf("\n");	
	}
	return 0;
}

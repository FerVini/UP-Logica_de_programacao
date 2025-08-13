#include <stdio.h>

int main() {
	printf("ex02 - Algoritmo que recebe 2 numeros e exibe a SOMA deles\n");
	
	int num1, num2, soma;
	
	printf("\nQual o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("\nQual o segundo numero: ");
	scanf("%d", &num2);
	
	soma = num1 + num2;
	
	printf("\nO resultado de %d + %d = %d", num1, num2, soma);
	
	return 0;
}

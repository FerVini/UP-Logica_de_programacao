#include <stdio.h>

int main() {
	int numero;
	
	printf("ex04 - Retorna o quadrado de um numero!\n\n");
	
	printf("Voce quer saber o quadrado de qual numero: ");
	scanf("%d", &numero);
	
	printf("O quadrado de %d e %d", numero, numero*numero);
	
	return 0;
}

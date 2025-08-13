#include <stdio.h>

int main() {
	
	char caracter;
	int numeroInteiro;
	float numeroDecimal;
	
	printf("Digite um caractere: \n");
	scanf("%c", &caracter);
	
	printf("Digite um numero inteiro: \n");
	scanf("%d", &numeroInteiro);
	
	printf("Digite um numero decimal: \n");
	scanf("%f", &numeroDecimal);
	
	
	printf("O caractere digitado foi: %c, o numero digitado foi: %d e o numero decimal digitado foi: %f", caracter, numeroInteiro, numeroDecimal);
}

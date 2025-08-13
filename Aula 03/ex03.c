#include <stdio.h>

int main() {
	int num1, num2;
	float media;
	
	printf("ex03 - Imprimir a media de dois numeros informados!\n\n");
	
	printf("Informe o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Informe o segundo numero: ");
	scanf("%d", &num2);
	
	media = (num1 + num2) / 2;
	
	printf("A media entre %d e %d e %1.f", num1, num2, media);
	
	return 0;
}

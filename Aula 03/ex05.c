#include <stdio.h>

int main() {
	printf("ex05 - Retornar saldo reajustado em 1%\n\n");
	
	float saldo;
	
	printf("Digite o saldo da conta: ");
	scanf("%f", &saldo);
	
	float valorReajustado = (saldo*0.01) + saldo;
	
	printf("\nO valor reajustado e de %.2f", valorReajustado);
	return 0;
}

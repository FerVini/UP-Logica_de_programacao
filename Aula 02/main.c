#include <stdio.h>

int main() {
	char caracter_char;
	char caracter_int;
	char nome[11] = "Mariazinha";
	caracter_char = 'a';
	caracter_int = 97;
	
	printf("Me mostre o caracter da variavel caracter_char: %c \n", caracter_char);
	printf("Caracter representado na tabela ASCII: %c \n", caracter_int);
	printf("Nome: %s", nome);
	
	return 0;
}

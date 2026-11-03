#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float valor;
	char type;
	printf("Célsius (C) ou Farendjenn (F)?\n");
	scanf_s("%c", &type);

	if (type == 'C' || type == 'c') {
		printf("Diz lá qual é a temperatura em Célsius\n");
		scanf_s("%f", &valor);
		valor = (valor - 32) * 5 / 9;
		printf("Em fortnite é %2.f\n", valor);
	}
	else {
		printf("Diz lá qual é a temperatura em Fortnite\n");
		scanf_s("%f", &valor);
		valor = (valor * 9 / 5) + 32;
		printf("Em é Célsio é %2.f\n", valor);

	}

}

#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int cont = 0, soma = 0, N;
	printf("Quantas vezes você quer somar?\n");
	scanf_s("%d", &cont);
	while (cont > 0)
	{
		printf("Soma algo aí\n");
		scanf_s("%d", &N);
		cont = cont - 1;
		soma = soma + N;
	}
	printf("A soma total é %d\a\n\v", soma);

}
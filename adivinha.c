#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int nrand = rand() % 1000 + 1;
	int nuser, cont = 0;
	
	do {
		printf("digite um número entre 1 e 1000: ");
		scanf_s("%d", &nuser);

		if (nuser < 1 || nuser > 1000)
		{
			printf("número inválido!\n");
			return 1;
		}
		if (nuser == nrand)
		{
			printf("parabéns! acertaste depois de %d tentativas!\n", cont);
		}
		else if (nuser < nrand)
		{
			printf("o número é \033[1mmaior\033[0m\n");
		}
		else
		{
			printf("o número é \033[1mmenor\033[0m\n");
		}
		cont++;
	} while (nuser != nrand);
	return 0;
}
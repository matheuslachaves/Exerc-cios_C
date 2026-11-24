#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int chave[5], adivinha[5];
	int i, j, cont = 0;
	for (i = 0; i < 5; i++) {
		chave[i] = rand() % 50 + 1;
		printf("%i ", chave[i]);
	}
	for (i = 0; i < 5; i++) {
		printf("\ndiz lá um número: ");
		scanf_s("%i", &adivinha[i]);
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (chave[i] == adivinha[j]) {
				cont++;
			}
		}
	}
	if (chave[0] == adivinha[0] && chave[1] == adivinha[1] && chave[2] == adivinha[2] && chave[3] == adivinha[3] && chave[4] == adivinha[4]) {
		printf("GANHASTE 1.000.000.000.000.000.000.000.000.000.000.000.000.000.000 BITCOINS\n");
	}
	else {
		printf("vive a tua vida normalmente, só acertaste %i\n", cont);
	}
	printf("a chave era:\n");
	for (i = 0; i < 5; i++) {
		printf("%i ", chave[i]);
	}


	return 0;
}
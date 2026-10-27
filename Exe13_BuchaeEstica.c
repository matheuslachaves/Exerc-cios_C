#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int i, q, n, maj, min, repetir = 0;
	do {
		maj = -214748364, min = 214748364;
		printf("Diz quantos números vais dizer?\a\n");
		scanf_s("%d", &q);
		for (i = 1; i <= q; i++) {
			printf("Diz lá o %dº número!\n", i);
			scanf_s("%d", &n);
			if (n > maj) {
				maj = n;
			}
			if (n < min) {
				min = n;
			}
		}
		printf("O número é: %d e o número menor é: %d\n", maj, min);
		printf("Queres continuar? (s-1, n-0)");
		scanf_s("%d", &repetir);
	} while (repetir != 0);
	return 0;
}
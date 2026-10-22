#include <stdio.h>
#include <locale.h>
int main(void)
{
	int n;
	setlocale(LC_ALL, "");

	do {
		printf("Diz lá um número\n");
		scanf_s("%d", &n);
		if (n != 0) {

			if (n % 3 == 0 && n % 5 != 0) {
				printf("É múltiplo de 3\n");
			}
			else if (n % 5 == 0 && n % 3 != 0) {
				printf("É múltiplo de 5\n");
			}
			else if (n % 5 == 0 && n % 3 == 0) {
				printf("É múltiplo de 3 e 5\n");
			}
			else {
				printf("");
			}
		}
	} while (n != 0);
	printf("\vDigitou 0 - Baza!\v");
	return 0;
}

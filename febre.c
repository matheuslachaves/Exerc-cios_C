#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float ti, tf;
	printf("Diz a temperatura inicial.\n");
	scanf_s("%f", &ti);
	printf("Diz a temperatura final.\n");
	scanf_s("%f", &tf);
	if (ti <= 35.5 || tf <= 35.5) {
		printf("És um anfibio!\n");
	}
	if (ti >= 37 || tf >= 37) {
		if (ti < tf) {
			printf("A tua febre aumentou!\n");
		}
		else if (ti > tf) {
			printf("A tua febre diminuiu!\n");
		}
		else if{
			printf("A tua febre manteve-se!\n");
		}
	}
	else {
		printf("Normal\n");
	}

	return 0;
}
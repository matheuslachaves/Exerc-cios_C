#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int N;
	do
	{
		printf("Diz lá um número\n");
		scanf_s("%d", &N);

		if (N < 0)
		{
			printf("É negativo\n");
		}
		else if (N > 0)
		{
			printf("É positivo\n");
		}
	} while (N != 0);
	printf("Digito 0 - Vai te embora");

	return 0;
}
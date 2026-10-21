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

		if (N%2 == 1)
		{
			printf("É impar\n");
		}
		else
		{
			printf("É par\n");
		}
	} while (N != 0);

	printf("Digito 0 - Vai te embora");
	return 0;
}
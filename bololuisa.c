#include <stdio.h>
#include <locale.h>

int main(void)
{
	setlocale(LC_ALL, "");
	int fatias, pessoas, fatias_por_pessoa;
	printf("quantas fatias o bolo?\n");
	scanf_s("%d", &fatias);
	printf("quantas pessoas vão comer o bolo?\n");
	scanf_s("%d", &pessoas);
	fatias_por_pessoa = fatias / pessoas;
	printf("cada pessoa ai comer %d fatias de bolo.\n", fatias_por_pessoa);
	return 0;
}
#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	float n1, n2, n3;
	printf("Diz o número 1\n");
	scanf_s("%f", &n1);
	printf("Diz o número 2\n");
	scanf_s("%f", &n2);
	printf("Diz o número 3\n");
	scanf_s("%f", &n3);
	if (n1 > n2 && n1 > n3)
	{
		printf("1º n é maior");
	}
	else if (n2>n3)
	{
		printf("o 2º no é o maior");
	}
	else
	{
		printf("o 3º número é maior");
	}
	return 0;
}
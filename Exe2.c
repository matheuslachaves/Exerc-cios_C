#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int p1;
	float area;
	printf("Qual o LADO DO QUADRADO ?");
	scanf_s("%i", &p1);
	area = p1 * 4;
	printf("A área do quadrado é %.2f\n", area);
	return 0;
}
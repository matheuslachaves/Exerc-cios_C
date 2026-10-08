#include <stdio.h>
#include <locale.h>
int main(void)
{
	setlocale(LC_ALL, "");
	int p1, p2;
	float area, per;
	printf("Qual a BASE DO RETÂNGULO ?");
	scanf_s("%d", &p1);
	printf("Qual a ALTURA DO RETÂNGULO ?");
	scanf_s("%d", &p2);
	area = p1 * p2;
	per = 2 * (p1 * p2);
	printf("A área do retângulo é %.1f\n", area);
	printf("A perímetro do retângulo é %.1f\n", per);
	return 0;
}